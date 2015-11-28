#include <iostream>
#include "Compressor.cpp"
#define FIXED_TIME_DELAY 50
#define MED 50
using namespace std;
class CoolingDuct
{
    int current_temp;
    int new_temp;
    int pressure;
    int temp_after_valve_change;
    int mean_pressure;
    int current_temp_reading;
    int current_temp_reading_therm;
    int Timervalue;
    int diff_temp ;
    Compressor* compressor;
    //TODO here or inside Constructor
    public:
    //CoolingDuct(){};
    CoolingDuct (Compressor* compressor)
    {
        this->compressor =compressor;
    }
    int set_temp(int mean_pressure,int new_temp);
    int get_temp();
    int defrost();

    //int valve_change(int pressure );

};
int CoolingDuct::set_temp(int mean_pressure,int new_temp)
{
    while( (new_temp>current_temp)||(new_temp<current_temp))
    {
        diff_temp=current_temp-new_temp;
        pressure=mean_pressure +(diff_temp);
        compressor->power(1);
        //time to complete the valve_change distance is proportional to the diff_temp
        //more pressure more cooling
        Timervalue=FIXED_TIME_DELAY+diff_temp;
        for (int i=0;i<Timervalue;i++){;}//when temp equalizes back;i++){;}//when temp equalizes back
        temp_after_valve_change=get_temp();
        if (temp_after_valve_change ==new_temp)
        {
            current_temp=new_temp;
            compressor->autorregulate();
        }

    }
    if(new_temp==current_temp)
    {
        compressor->autorregulate();
    }
}
int CoolingDuct::get_temp()
{
    //read temp
    //current_temp_reading=read_thermometer();
    cout <<"The value of temp set is:";
    cin >>current_temp_reading;
    current_temp_reading_therm=current_temp_reading;
    return current_temp_reading_therm;
}
int CoolingDuct::defrost()
{
    compressor->power(0);

}
