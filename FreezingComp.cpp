#include <iostream>
#include <cstddef>
#include "Door.cpp"
#include "Light.cpp"
#include "TempControlUnit.cpp"
using namespace std;
class FreezingComp{
	int no_freezing_component;
	int no_racks;
    int mean_pressure;
    int temp_max;
    int temp_min;
    int new_temp;
	enum temp_range {temp_below_freezing,temp_above_freezing} temp_range_for_freezing_comp,temp_range_value;
    Door* door;
    CoolingDuct* coolingDuct;
    TempControlUnit* tempControlUnit = NULL;//(instead of simply making an instance, we need to declare a pointer on heap
    //because  c++ expects to new the default constructor on stack but we have made a overridden constructor with 2 arguments
    Light* light;
	public:
    int is_door_open;
    //FreezingComp (temp_range temp_range_for_freezing_comp,int no_racks_value,Door door,TempControlUnit* tempControlUnit,Light light)
    FreezingComp (int no_racks_value,Door* door,TempControlUnit* tempControlUnit,Light* light)
    {
        no_racks= no_racks_value;
        //temp_range_value= temp_range_for_freezing_comp;
    this->door=door;
    this->tempControlUnit=tempControlUnit;
    this->light=light;
    //set_pressure_range(temp_range_value);



    }
    int open();
    int close();
    int set_pressure_range(temp_range temp_range_value);
    int set_temp(int new_temp);
    int show_state_of_each_part(Door* door,TempControlUnit* tempControlUnit,Light* light);

};

int FreezingComp::open()
{
    is_door_open=door->door_open();
    if (is_door_open ==1)
    {
        cout<< "door is open";
        light->light_on();
    }
    else
    {
        cout<< "Door is closed";
        light->light_off();
    }

}


int FreezingComp::close()
{
    door->door_close();
    light->light_off();
}

int FreezingComp::set_pressure_range(temp_range temp_range_value)
{
    if (temp_range_value==temp_below_freezing)
    {
        temp_max=-2;
        temp_min=-15;
        mean_pressure=20;
    }
     else if (temp_range_value== temp_above_freezing)
     {
        temp_max=15;
        temp_min=2;
        mean_pressure=5;
     }
}


int FreezingComp::set_temp(int temp_new)
{
    tempControlUnit->user_set_temp(temp_new);

}



