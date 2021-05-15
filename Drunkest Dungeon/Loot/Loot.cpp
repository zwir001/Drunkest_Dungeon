#include "Loot.hpp"

Loot::Loot()
{
    name = "brak";
    strength = 0;
}

Loot::Loot( std::string loot_name, int loot_stat )
{
    name = loot_name;
    strength = loot_stat;
}