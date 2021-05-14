#pragma once

#include "Loot/Loot.hpp"

class Relic: public Loot
{
    private:
    int stat;
    int stat_type;

    public:
    Relic( int relic_stat, int relic_stat_type );
    
    void randomize();

    void increase_stat( int stat, int stat_type );
};