#pragma once
#include <string>
class Human
{
    protected:

    std::string name;
    int health;

    public:
    Human();

    Human( std::string obj_name, int obj_health );

    std::string get_name(  );
    
    int get_health( );

};


