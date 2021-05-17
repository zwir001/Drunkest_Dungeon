#include "Dziekanat.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand( time( NULL ) );
    //setlocale(LC_ALL, "pl_PL");
    system("chcp 65001");
    //system( "cls" );
    //Dziekanat test;
    Teacher g("Jędrzej Soldierek", 300, 69, 3, "Egzekucja", 150, 50 );
    Student a("Kamil Gnojnar", 1200, 17, 20, 35, 23 );
    //a.fight(test.get_enemy(0));
    a.fight(g);
    
    
    return 0;
}