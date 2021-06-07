/*
Drunkest Dungeon
Langusty z Kapusty
259128 Wirwis Jakub
259201 Serwuszok Damian
*/

#include "Dziekanat/Dziekanat.hpp"
#include "Human/Student/Student.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //setlocale(LC_ALL, "pl_PL");
    srand(time(NULL));
    system("chcp 65001");
    system( "cls" );
    Dziekanat symulacja = Dziekanat();
    symulacja.simulation();
    return 0;
}