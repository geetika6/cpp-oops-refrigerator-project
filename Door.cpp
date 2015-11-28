#include <iostream>
using namespace std;
class Door{
    int door_state_open;
    public:
    int door_open();
    int door_close();
    int door_state();

};
int Door::door_open()
{
    door_state_open =1;
    cout<<"door is open";
    return door_state_open;
}

int Door::door_close()
{
    door_state_open =0;
    cout<<"door is close";
    return door_state_open;
}
int Door::door_state()
{
    cout<<"door state is:::"<<door_state_open;
}
