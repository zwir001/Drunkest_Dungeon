#include "Teacher.hpp"

#include <iostream>
#include <cstdlib>

Teacher::Teacher(std::string obj_name, int obj_health, int s, int s_type, std::string u_name, int u_power, int u_chance)
    : Human(obj_name, obj_health)
{

    stat = s;
    stat_type = s_type;
    ulti_name = u_name;
    ulti_power = u_power;
    ulti_chance = u_chance;
}

bool Teacher::ultimate_power()
{
    return (std::rand() % 100 < ulti_chance) ? 1 : 0;
}

std::string Teacher::get_ulti_name()
{
    return ulti_name;
}

int Teacher::get_stat()
{
    return stat;
}

int Teacher::get_stat_type()
{
    return stat_type;
}

int Teacher::get_ulti_power()
{
    return ulti_power;
}

void Teacher::lose_health(int damage)
{
    health -= damage;
}

int Teacher::randomize()
{
    int seed = std::rand() % 15;
    
    return seed;
}
void Teacher::show()
{
    std::cout<<"\nNapotykasz: "<<name<<", wasza walka będzie legendarna..."<<std::endl;
}