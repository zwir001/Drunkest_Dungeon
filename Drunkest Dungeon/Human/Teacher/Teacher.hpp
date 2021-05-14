#pragma once

#include "Human/Human.hpp"

class Teacher: public Human
{
    private:

    int stat;
    int stat_type;

    public:
    Teacher(int stat, int stat_type);

    void fight();
    
};

