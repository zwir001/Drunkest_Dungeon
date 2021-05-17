#pragma once

#include "Human/Student/Student.hpp"
#include "Human/Teacher/Teacher.hpp"
#include "Location/Location.hpp"
#include "Loot/Biwo/Biwo.hpp"
#include "Loot/Relic/Relic.hpp"

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
