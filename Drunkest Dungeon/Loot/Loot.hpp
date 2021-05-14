#pragma once

#include <string>

class Loot
{
    private:

    std::string name;
    int strength;

    public:

    Loot( std::string loot_name, int loot_stat, int loot_stat_type);

    void increase_stat( int stat, int stat_type);
    
    void randomize();
};
