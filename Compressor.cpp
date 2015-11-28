#include <iostream>
#define FIXED_TIME_DELAY 50
#define MED 50
using namespace std;
class Compressor{
    int compressor_on_off;//state = 0 for off //state =1 for on
    int compressor_state ;//state = 0 for off //state =1 for on
    int degree_of_valve_opening ;
    int current_degree_of_valve_opening ;
    int diff_temp  ;//state = 0 for off //state =1 for on
    current_degree_of_valve_opening =MED;
    //int freezer_valve_open_close ;
    //int fridge_valve_open_close ;
    //int Avalves[];
    public:
    void power(int compressor_on_off);
    //int valve_change(int open_close);
    int fridge_valve(int open_close);
    int freezer_valve(int open_close);
};

void Compressor::power(int compressor_on_off)
{    if (compressor_on_off==1){
    compressor_state=1;
    cout<< "the compressor is on";
                              }
else if (compressor_on_off==0)
{compressor_state=0;
    cout<<"compressor is off";
    for(int i=0;i<=FIXED_TIME_DELAY;i++);//FIXED DELAY
    compressor_state=1;

}
}
int Compressor::fridge_valve(int diff_temp)
{
    if (diff_temp>0)||(diff_temp<0)
        {
        degree_of_valve_opening = current_degree_of_valve_opening +diff_temp ;
        return degree_of_valve_opening;
        //for (int i=0;i<FIXED_TIME_DELAY;i+
}
int Compressor::freezer_valve(int diff_temp)
{
    if (diff_temp>0)||(diff_temp<0)
        {
        degree_of_valve_opening = current_degree_of_valve_opening +diff_temp ;
        return degree_of_valve_opening;
        //for (int i=0;i<FIXED_TIME_DELAY;i+
}

