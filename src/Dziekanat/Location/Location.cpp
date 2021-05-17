#include "Location.hpp"

#include <cstdlib>

Location::Location(int size)
{
    current_room = 0;
    length = size;
}

int Location::get_length()
{
    return length;
}

int Location::get_current_room()
{
    return current_room;
}

int Location::randomize() //zawartość pokoju czy nauczyciel, relic, biwo, pusty
{
    int seed=std::rand()%100;
    if(seed>=0 || seed<30)
    {
        return 0;
    }
    if(seed>=30 || seed<60)
    {
        return 1;
    }
    if(seed>=60 || seed<80)
    {
        return 2;
    }
    return 3;
}

void Location::next_room()
{
    if(current_room<length) current_room++;
}
