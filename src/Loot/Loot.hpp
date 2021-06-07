#ifndef LOOT_HPP
#define LOOT_HPP

#include <string>
#include <iostream>

class Loot
{
    protected:

    std::string name;
    int strength;

    public:
    Loot();

    Loot( std::string loot_name, int loot_stat );
    private:

    virtual void show() = 0;
    
};

#endif
