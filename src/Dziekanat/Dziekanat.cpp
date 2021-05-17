#include "Dziekanat.hpp"

Dziekanat::Dziekanat()
{
    Enemies[0] = Teacher("Jędrzej Soldierek", 300, 69, 3, "Egzekucja", 150, 5 );
}

Teacher Dziekanat::get_enemy( int index )
{
    return Enemies[index];
}
