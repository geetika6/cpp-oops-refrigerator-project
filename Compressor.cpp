#include <iostream>
#define FIXED_TIME_DEFROST 50
#define TIMER_AUTO_REGULATE 100
using namespace std;
class Compressor{
    int compressor_on_off;//state = 0 for off //state =1 for on
    int compressor_state ;//state = 0 for off //state =1 for on
    int speed_of_cool_air;
    int new_speed_of_cool_air;
    public:
    void power(int compressor_on_off);
    void autorregulate();
    //int give_cool_air(int speed_of_cool_air);
    //int fridge_valve(int openu_close);
    //int freezer_valve(int open_close);
};

void Compressor::power(int compressor_on_off)
{    if (compressor_on_off==1)
    {
        compressor_state=1;
        cout<< "the compressor is on";
    }
    else if (compressor_on_off==0)
    {
        compressor_state=0;
        cout<<"compressor is off";
        for(int i=0;i<=FIXED_TIME_DEFROST;i++);//FIXED DELAY
        compressor_state=1;
    }
}
void Compressor::autorregulate()
{
    power(1);
    for (int i=0;i<TIMER_AUTO_REGULATE;i++){;}//when temp equalizes back;i++){;}//when temp equalizes back
    power(0);

}

