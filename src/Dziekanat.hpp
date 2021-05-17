#pragma once

#include "Dziekanat/Human/Student/Student.hpp"
#include "Dziekanat/Human/Teacher/Teacher.hpp"
#include "Dziekanat/Location/Location.hpp"
#include "Dziekanat/Loot/Biwo/Biwo.hpp"
#include "Dziekanat/Loot/Relic/Relic.hpp"

class Dziekanat
{
    public:
    Teacher Enemies[5];
    Student Students[3];
    Location Locations[3];
    Biwo Biwo;
    Relic Relic[4];

    Dziekanat();

    Teacher get_enemy( int index );

    void simulation();
};