#ifndef RELIC_HPP
#define RELIC_HPP

#include "src/Loot/Loot.hpp"

class Relic: public Loot
{
    private:
    int stat_type;

    public:
    Relic(){};
    
    Relic(std::string relic_name, int relic_strength, int relic_stat_type );

    
    int get_stat_type( );

    int increase_stat( );

    static int randomize( );

    void show(){};
};

#endif