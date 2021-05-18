#pragma once

#include "src/Human/Student/Student.hpp"
#include "src/Human/Teacher/Teacher.hpp"
#include "src/Location/Location.hpp"
#include "src/Loot/Biwo/Biwo.hpp"
#include "src/Loot/Relic/Relic.hpp"

class Dziekanat
{
    public:
    Teacher Enemies[5];
    Student Students[3];
    Location Locations[3];
    Biwo Biwo;
    Relic Relic[4];

    Dziekanat( int i);

    Teacher get_enemy( int index );

    void simulation();
};