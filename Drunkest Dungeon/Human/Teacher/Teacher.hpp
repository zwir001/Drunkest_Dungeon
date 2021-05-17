#pragma once

#include "../Human.hpp"

class Teacher: public Human
{
    private:

    int stat;
    int stat_type;
    std::string ulti_name;
    int ulti_power;
    int ulti_chance;

    public:
    
    Teacher();

    Teacher(std::string obj_name, int obj_health, int s, int s_type, std::string u_name, int u_power, int u_chance );

    bool ultimate_power();

    std::string get_ulti_name();

    int get_stat();

    int get_stat_type();

    int get_ulti_power();

    void lose_health(int damage);


};

