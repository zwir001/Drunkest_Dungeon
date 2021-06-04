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
    srand( time( NULL ) );          // main chwilowo służy do testowania funkcji
    //setlocale(LC_ALL, "pl_PL");
    system("chcp 65001");
    //system( "cls" );
    Dziekanat test(1);
    //Teacher g("Jędrzej Soldierek", 300, 69, 3, "Egzekucja", 150, 50 );
    Student a("Kamil Gnojnar", 1200, 17, 20, 35, 23 );
    a.fight(test.get_enemy(0));
    
    return 0;
}