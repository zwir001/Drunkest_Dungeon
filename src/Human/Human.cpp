#include "Human.hpp"

#include <string>
#include <iostream>

Human::Human()
{
    name = "brak";
    health = 0;
}

Human::Human( std::string obj_name, int obj_health )
{
    name=obj_name;
    health=obj_health;
}

std::string Human::get_name()
{
    return name;
}
int Human::get_health( )
{
    return health;
}