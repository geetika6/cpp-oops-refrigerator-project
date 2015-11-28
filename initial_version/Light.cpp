#include <iostream>
using namespace std;
class Light{
    int light_intensity;
public:
    void light_on();
    void light_off();

};
void Light::light_on()
{light_intensity =1;
     cout<<"light is switched on";
}

void Light::light_off()
{light_intensity =0;
    cout<<"light is switched off";
}
