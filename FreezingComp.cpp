#include <iostream>
using namespace std;
class FreezingComp{
	int no_freezing_component;
	int no_racks;
	enum temp_range {temp_below_freezing,temp_above_freezing} temp_range,temp_range_value;
        //class Door,doorType,TempControlUnit,tempControlUnitType,Light,lightType;
        //class doorType,tempControlUnitType,lightType;
   Door doorType;
   TempControlUnit tempControlUnit;
   Light lightType;
	public:
    int is_door_open;
	//FreezingComp (int no_freezing_component_value;int no_racks_value,enum temp_range_value,Door D,TempControlUnit T,Light L);
    FreezingComp (int no_racks_value,Door door,TempControlUnit tempControlUnit,Light light)
    {
        no_racks= no_racks_value;
        //temp_range= temp_range_value;
    doorType=door;
    tempControlUnitType=tempControlUnit;
    tightType=light;


    }
    int open();
    int close();
    int set_temp_range(enum temp_range_value);
    int set_temp();

};

FreezingComp::open(){
    is_door_open=doorType.open();
    if (is_door_open ==1)
    {cout<< "door is open";
    lightType.light_on();
    };
    else  {cout<< "Door is closed";
        lightType.light_off()};

}


FreezingComp::close(){
    doorType.close();
    lightType.light_off()};

}

FreezingComp::set_temp_range(enum temp_range_value){
if (temp_range==temp_below_freezing)
{   temp_max=2;
     temp_min=-15;}
     else if (temp_range== temp_above_freezing)
{ temp_max=15;
        temp_min=2;
}
}


FreezingComp::set_temp(int temp_new){
    tempControlUnitType.user_set_temp(temp_new);

}

//FreezingComp::temp_defrost(){
//CompressorType.compressor_valve_fridge.off();
//}

class Fridge: public FreezingComp
{
private:

public:
    void method1();
    void method2();
};

// Provide implementation for the first method
void Concrete::method1()
{
    // Your implementation
}

// Provide implementation for the second method
void Concrete::method2()
{
    // Your implementation
}


