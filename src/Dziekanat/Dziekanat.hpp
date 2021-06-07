#ifndef DZIEKANAT_HPP
#define DZIEKANAT_HPP

#include "src/Human/Student/Student.hpp"
#include "src/Human/Teacher/Teacher.hpp"
#include "src/Location/Location.hpp"
#include "src/Loot/Biwo/Biwo.hpp"
#include "src/Loot/Relic/Relic.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>


class Dziekanat
{
    private:
    Teacher enemies[15];
    Student students;
    Location locations;
    Biwo biwo;
    Relic relic[4];

    public:
    
    Dziekanat();

    Teacher get_enemy( int index );

    void simulation();
};

#endif