#include "Biwo.hpp"

Biwo::Biwo( int strength_stat )
{
    name = "Biwo";
    strength = strength_stat;
}

int Biwo::increase_health()
{
    return strength;
}



