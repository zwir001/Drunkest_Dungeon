#pragma once

#include "src/Dziekanat/Human/Human.hpp"
#include "src/Dziekanat/Location/Location.hpp"
#include "src/Dziekanat/Loot/Biwo/Biwo.hpp"
#include "src/Dziekanat/Loot/Relic/Relic.hpp"
#include "src/Dziekanat/Teacher/Teacher.hpp"

class Student : public Human
{
private:
    int it;
    int maths;
    int psyche;
    int sorcery;
    bool alive;

public:
    Student();

    Student(std::string obj_name, int obj_health, int stat_it, int stat_m, int stat_p, int stat_s);

    int get_it();

    int get_maths();

    int get_psyche();

    int get_sorcery();

    void increase_it(int strength);

    void increase_maths(int strength);

    void increase_psyche(int strength);

    void increase_sorcery(int strength);

    void move(Location Location);

    void checkroom(Location Location);

    void fight(Teacher Teacher);

    void restore(int strength);

    void use_Biwo(Biwo Biwo);

    void use_Relic(Relic Relic);

    void finish();
};