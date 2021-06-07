#ifndef BIWO_HPP
#define BIWO_HPP

#include "src/Loot/Loot.hpp"

class Biwo: public Loot
{
    public:
    
    Biwo(){};

    Biwo( int strength_stat );

    int increase_health(  );

    void show(){};

};

#endif