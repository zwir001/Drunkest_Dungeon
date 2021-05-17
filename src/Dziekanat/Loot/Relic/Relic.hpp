#pragma once

#include "../Loot.hpp"

class Relic: public Loot
{
    private:
    int stat_type;

    public:
    Relic();
    
    Relic(std::string relic_name, int relic_strength, int relic_stat_type );

    
    int get_stat_type( );

    int increase_stat( );

    int randomize( );
};