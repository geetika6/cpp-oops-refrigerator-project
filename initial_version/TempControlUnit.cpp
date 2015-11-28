#include <iostream>
//#include "Compressor.cpp"
#include "CoolingDuct.cpp"
#define MED 50
using namespace std;
class TempControlUnit{
    int current_temp;
    int new_temp;
    int open_close_valve ;
    int diff_temp ;
    CoolingDuct coolingDuct;
    public:
    TempControlUnit(CoolingDuct coolingDuct)
    {
        this->coolingDuct =coolingDuct;
    }
    virtual user_set_temp(int new_temp);
    virtual defrost();

};


TempControlUnitFridge:public TempControlUnit
{
user_set_temp();
}

int TempControlUnitFridge::user_set_temp(int new_temp)
{
    CoolingDuct.set_fridge_temp(new_temp);
}
void TempControlUnitFridge::defrost()
{
    CoolingDuct.defrost();
}

TempControlUnitFreezer:public TempControlUnit
{
user_set_temp();
}

int TempControlUnitFreezer::user_set_temp(int new_temp)
{
    CoolingDuct.set_freezer_temp(new_temp);
}
void TempControlUnitFreezer::defrost()
{
    CoolingDuct.defrost();

}
