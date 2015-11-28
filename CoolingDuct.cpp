class CoolingDuct
{
    int current_temp;
    int new_temp;
    int degree_of_valve_opening_fridge;
    int degree_of_valve_opening_freezer;
    int diff_temp ;
    Compressor compressor;
    public:
    CoolingDuct(){};
    CoolingDuct (Compressor compressor)
    {
        this->compressor =compressor;
    }
    int set_fridge_temp(int new_temp);
    int set_freezer_temp(int new_temp);
    int defrost();

    //int valve_change(int degree_of_valve_opening );

};
int CoolingDuct::set_fridge_temp(int new_temp)
{
    while( (new_temp>current_temp)||(new_temp<current_temp))
    {
        diff_temp=current_temp-new_temp;
           // compressor.fridge_valve(open_close_valve +(diff_temp));
        //TODOdegree_of_valve_opening_fridge=compressor.valve_change(diff_temp);
        degree_of_valve_opening_fridge=compressor.fridge_valve(diff_temp);

        for (int i=0;i<FIXED_TIME_DELAY;i++){;}//when temp equalizes back
            temp_after_valve_change=get_temp();

    }
}
int CoolingDuct::set_freezer_temp(int new_temp)
{
    while( (new_temp>current_temp)||(new_temp<current_temp))
    {
        diff_temp=current_temp-new_temp;
           // compressor.fridge_valve(open_close_valve +(diff_temp));
        degree_of_valve_opening_freezer=compressor.freezer_valve(diff_temp);
        //TODOdegree_of_valve_opening_freezer=compressor.valve_change(diff_temp);

        for (int i=0;i<FIXED_TIME_DELAY;i++){;}//when temp equalizes back
            temp_after_valve_change=get_temp();

    }
}
int CoolingDuct::defrost()
{
    compressor.power(0);

}
