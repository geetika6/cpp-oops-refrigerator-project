#include <iostream>
using namespace std;
class Light{
    int light_intensity;
public:
    void light_on();
    void light_off();
    int light_state();

};
void Light::light_on()
{
    light_intensity =1;
     cout<<"light is switched on";
}

void Light::light_off()
{
    light_intensity =0;
    cout<<"light is switched off";
}
int Light::light_state()
{

    cout<<"light state is:"<<light_intensity<<"\n"<<"1 is light on and 0 is light off and other number stands for dim";
}
