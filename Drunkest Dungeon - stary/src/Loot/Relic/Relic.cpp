#include "Relic.hpp"
#include <cstdlib>

Relic::Relic(std::string relic_name, int relic_strength, int relic_stat_type)
    : Loot(relic_name, relic_strength)
{
    stat_type = relic_stat_type;
}

int Relic::get_stat_type()
{
    return stat_type;
}

int Relic::increase_stat()
{
    return strength;
}

int Relic::randomize() //rodzaj relica
{
    int seed = std::rand() % 4;
    return seed;
}