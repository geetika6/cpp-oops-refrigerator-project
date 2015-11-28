#include <iostream>
#include "Door.cpp"
#include "Light.cpp"
#include "TempControlUnit.cpp"
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
    Door door;
    Light light;
    TempControlUnit tempControlUnit ;
    Compressor compressor;
    //FreezingComp (int no_racks_value,Door door,TempControlUnit tempControlUnit,Light light);

    int cooling_duct();
    FreezingComp fridge(5,door,tempControlUnitFridge,light);
    FreezingComp freezer(2,door,tempControlUnitFreezer,light);
    Refrigerator(int);

};

Refrigerator::Refrigerator(int value_no_freezing_component )
{
    no_freezing_component=a;
}
int main(){
    Refrigerator refrigerator(2);
    refrigerator.fridge.open();
    refrigerator.fridge.set_temp(14);
    for (int i=0;i<100;i++);
    refrigerator.fridge.open();

    return 0;
}
