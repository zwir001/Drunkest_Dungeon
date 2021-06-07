#include "Student.hpp"
#include <iostream>

 
Student::Student(std::string obj_name, int obj_health, int stat_it, int stat_m, int stat_p, int stat_s)
    : Human(obj_name, obj_health)
{
    it = stat_it;
    maths = stat_m;
    psyche = stat_p;
    sorcery = stat_s;
    alive = 1;
}

int Student::get_it()
{
    return it;
}

int Student::get_maths()
{
    return maths;
}

int Student::get_psyche()
{
    return psyche;
}

int Student::get_sorcery()
{
    return sorcery;
}

void Student::increase_it(int strength)
{
    it += strength;
}

void Student::increase_maths(int strength)
{
    maths += strength;
}

void Student::increase_psyche(int strength)
{
    psyche += strength;
}

void Student::increase_sorcery(int strength)
{
    sorcery += strength;
}

void Student::move(Location Location)
{
    Location.next_room();
}

void Student::fight(Teacher Teacher)
{
    int stat_tab[4] = {it, maths, psyche, sorcery};
    Teacher.show();
    if (stat_tab[Teacher.get_stat_type()] < Teacher.get_stat())
    {
        while (alive)
        {
            if (Teacher.ultimate_power())
            {
                std::cout << "Przeciwnik używa umiejętności specjalnej: " << Teacher.get_ulti_name() << std::endl
                          << "Tracisz " << Teacher.get_ulti_power() << " punktów życia.";
                health -= Teacher.get_ulti_power();
                Sleep(1000);
            }
            else
            {
                std::cout << "Tracisz " << Teacher.get_stat() << " punktów życia." << std::endl;
                health -= Teacher.get_stat();
                Sleep(1000);
            }
            if (health > 0)
            {
                std::cout << "Zadajesz " << stat_tab[Teacher.get_stat_type()] << " punktów obrażeń." << std::endl;
                Teacher.lose_health(stat_tab[Teacher.get_stat_type()]);
                Sleep(1000);
            }
            else
                alive = 0;
            std::cout << std::endl
                      << "Koniec Tury"<<"\n----------------------------------------------\n"
                      << std::endl
                      << "Twoje punkty życia: " << health << std::endl
                      << "Punkty życia przeciwnika: " << Teacher.get_health() << std::endl
                      << " " << std::endl;
            Sleep(3000);
            if (Teacher.get_health() <= 0)
                break;
        }
    }
    else
    {
        while (alive)
        {
            std::cout << "Zadajesz " << stat_tab[Teacher.get_stat_type()] << " punktów obrażeń." << std::endl;
            Teacher.lose_health(stat_tab[Teacher.get_stat_type()]);
            Sleep(1000);
            if (Teacher.get_health() <= 0)
                break;
            if (Teacher.ultimate_power())
            {
                std::cout << "Przeciwnik używa umiejętności specjalnej: " << Teacher.get_ulti_name() << std::endl
                          << "Tracisz " << Teacher.get_ulti_power() << " punktów życia." << std::endl;
                health -= Teacher.get_ulti_power();
                Sleep(1000);
            }
            else
            {
                std::cout << "Tracisz " << Teacher.get_stat() << " punktów życia." << std::endl;
                health -= Teacher.get_stat();
                Sleep(1000);
            }

            std::cout <<std::endl << "Koniec Tury" << std::endl
            <<"----------------------------------------------\n"<< "Twoje punkty życia: " << health << std::endl
                      << "Punkty życia przeciwnika: " << Teacher.get_health() << std::endl
                      << " " << std::endl;
            Sleep(3000);
            if (health <= 0)
                alive = 0;
        }
    }
    if (alive)
    {
        std::cout << "Pokonałeś przeciwnika." << std::endl;
    }
    else
    {
        std::cout << " SKREŚLAM PANA Z LISTY STUDENTÓW" << std::endl
                  << "              ~ DAREK VOICE " << std::endl;
    }
}

void Student::restore(int strength)
{
    health += strength;
}

void Student::use_Biwo(Biwo &Biwo)
{
    std::cout << "Jest ciemno, w powietrzu rozchodzi się znajoma woń..."
    <<std::endl<<"Znajdujesz Biwo i je wypijasz. Wracają ci siły witalne... " << std::endl;
    restore(Biwo.increase_health());
    std::cout << "Twój aktualny poziom zdrowia to: " << health << std::endl;
}

void Student::use_Relic(Relic &Relic)
{
    switch (Relic.get_stat_type())
    {
    case 0:
        increase_it(Relic.increase_stat());
        std::cout << "Czujesz nieprzyjemny swąd, piekące opary gorczycy podrażniają twoje oczy..."
        <<std::endl<<"Znajdujesz Pizzę z musztardą i ananasem. Obecny poziom IT: " << it << std::endl;
        break;
    case 1:
        increase_maths(Relic.increase_stat());
        std::cout << "Coś zaczyna chrupać pod twoimi stopami..."
        <<std::endl<<"Znajdujesz Koci żwirek. Obecny poziom matematyki: " << maths << std::endl;
        break;
    case 2:
        increase_psyche(Relic.increase_stat());
        std::cout << "Do twoich uszu dochodzą dźwięki anielskich chórów..."
        <<std::endl<<"Znajdujesz Teologię Kultury. Obecny poziom filozofii: " << psyche << std::endl;
        break;
    case 3:
        increase_sorcery(Relic.increase_stat());
        std::cout<<"Twój głośnik JBL nagle zaczyna sprzężać..."
        <<std::endl<<"Znajdujesz Mikrofon. Obecny poziom drylu: " << sorcery << std::endl;
        break;
    default:
        break;
    }
}

bool Student::check_alive()
{
    return alive;
}