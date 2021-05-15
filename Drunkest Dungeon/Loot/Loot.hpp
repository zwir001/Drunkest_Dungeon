#pragma once

#include <string>

class Loot
{
    protected:

    std::string name;
    int strength;

    public:
    Loot();

    Loot( std::string loot_name, int loot_stat );
    
};
