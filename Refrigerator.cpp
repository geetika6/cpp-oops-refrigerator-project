#include <iostream>
#include "FreezingComp.cpp"
class FreezingComp;
class Compressor;
class Door;
class Light;
class TempControlUnitFridge;
class TempControlUnitFreezer;
using namespace std;
class Refrigerator
{
    int no_freezing_component;
    public:
    FreezingComp* freezingComp;// (int no_racks_value,Door door,TempControlUnit tempControlUnit,Light light);
    //TempControlUnit* tempControlUnit = NULL;
    int cooling_duct();
    //FreezingComp fridge(5,door,tempControlUnitFridge,light);
    //FreezingComp freezer(2,door,tempControlUnitFreezer,light);
Refrigerator(int value_no_freezing_component)
{
    no_freezing_component=value_no_freezing_component;
}

};

int main(){
    int mean_pressure_fridge,mean_pressure_freezer;
    int no_racks_fridge,no_racks_freezer;
    Compressor* compressor=new Compressor();
    CoolingDuct* coolingDuct=new CoolingDuct(compressor);
    mean_pressure_fridge=5;
    mean_pressure_freezer=20;
    TempControlUnit* tempControlUnitFridge=new TempControlUnit(mean_pressure_fridge,coolingDuct);
    TempControlUnit* tempControlUnitFreezer=new TempControlUnit(mean_pressure_freezer,coolingDuct);
    Door* door=new Door;
    Light* light=new Light;
    no_racks_fridge=10;
    no_racks_freezer=3;
    FreezingComp* fridge=new FreezingComp(no_racks_fridge,door,tempControlUnitFridge,light);
    FreezingComp* freezer=new FreezingComp(no_racks_freezer,door,tempControlUnitFreezer,light);

    Refrigerator* refrigerator=new Refrigerator(2);
    fridge->open();
    fridge->set_temp(14);
    for (int i=0;i<100;i++);
    fridge->open();

    return 0;
}
