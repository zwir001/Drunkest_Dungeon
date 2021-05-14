#pragma once

#include "Human/Human.hpp"
#include "Location/Location.hpp"
#include "Loot/Biwo/Biwo.hpp"
#include "Loot/Relic/Relic.hpp"

class Student: public Human
{
    private:
    int it;
    int maths;
    int psyche;
    int sorcery;
    bool alive;

    public:
    Student(int stat_it, int stat_m, int stat_p, int stat_s);

    int get_it( int it );

    int get_maths( int maths );

    int get_psyche( int psyche );

    int get_sorcery( int sorcery );

    int increase_it( int it );

    int increase_maths( int maths );

    int increase_psyche( int psyche );

    int increase_sorcery( int sorcery );

    void move();

    void checkroom( Location Location );

    void fight();

    void restore();

    void use_Biwo( Biwo Biwo );

    void use_Relic( Relic Relic);

    void finish();

};