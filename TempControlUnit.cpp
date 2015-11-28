#include <iostream>
#include "CoolingDuct.cpp"
#define MED 50
using namespace std;
class TempControlUnit{
    int current_temp;
    int new_temp;
    int new_set_temp;
    int open_close_valve ;
    int diff_temp ;
    int mean_pressure_of_unit ;
    int mean_pressure;
    CoolingDuct* coolingDuct;
    //MyClass* myClass = new MyClass();
    public:
    TempControlUnit(int mean_pressure,CoolingDuct* coolingDuct)
    {
        this->coolingDuct =coolingDuct;
        mean_pressure_of_unit=mean_pressure;
    }
    int user_set_temp(int new_temp);
    int show_temp();
    void defrost();

};

int TempControlUnit::user_set_temp(int new_temp)
{
    new_set_temp=new_temp;
    coolingDuct->set_temp(mean_pressure,new_temp);
}
int TempControlUnit::show_temp()
{
    cout <<"The value of temp set is:"<<new_set_temp;
}
void TempControlUnit::defrost()
{
    coolingDuct->defrost();
}












//TempControlUnitFridge:public TempControlUnit
//{
//user_set_temp();
//}
//
//int TempControlUnitFridge::user_set_temp(int new_temp)
//{
//    CoolingDuct.set_fridge_temp(new_temp);
//}
//void TempControlUnitFridge::defrost()
//{
//    CoolingDuct.defrost();
//}
//
//TempControlUnitFreezer:public TempControlUnit
//{
//user_set_temp();
//}
//
//int TempControlUnitFreezer::user_set_temp(int new_temp)
//{
//    CoolingDuct.set_freezer_temp(new_temp);
//}
//void TempControlUnitFreezer::defrost()
//{
//    CoolingDuct.defrost();
//
//}
