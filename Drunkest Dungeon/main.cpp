//#include "Dziekanat/Dziekanat.h"
#include <iostream>
#include "Human/Human.hpp"
int main()
{
    Human jebaniec( "C++", 0);
    std::cout<<jebaniec.get_health()<< "to jest chujec : "<<jebaniec.get_name();

    return 0;
}