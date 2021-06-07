#include "Dziekanat.hpp"

void show_student(int index, std::string name, int health, int it, int m, int p, int s)
{
    std::cout << "( " << index << " )\nImię: " << name << "\nPunkty życia: " << health << "\nIT: " << it << "\nMatematyka: " << m << "\nFilozofia: " << p << "\nDryl: " << s << std::endl;
}
Dziekanat::Dziekanat()
{
    //Deklaracja Przeciwników
    enemies[0] = Teacher("Jędrzej Soldierek", 300, 69, 3, "Egzekucja", 150, 5);
    enemies[1] = Teacher("Daniel Subzero", 175, 28, 0, "Z Kopyta", 212, 5);
    enemies[2] = Teacher("Sylwester Szczypiorak", 150, 20, 1, "No To Co", 160, 5);
    enemies[3] = Teacher("Jack Hołownia", 750, 1, 2, "Błogosławieństwo Kierkegaard'a", 666, 5);
    enemies[4] = Teacher("Jarek Sandecki", 540, 50, 0, "Wybuchowy Gokart", 210, 5);
    enemies[5] = Teacher("Stanisław Ogniecki", 420, 28, 1, "Pogoda ci nie sprzyja", 112, 5);
    enemies[6] = Teacher("Jurek Joannita", 997, 15, 1, "Herbata z Łyżeczką", 75, 5);
    enemies[7] = Teacher("Andrzej Maleńczuk", 120, 36, 1, "Całka po Chuju", 220, 5);
    enemies[8] = Teacher("Gaweł Tryhardos", 1080, 5, 0, "Sen... na..., czy są jakieś pytaaania?... Javie", 99, 5);
    enemies[9] = Teacher("Marlena Łuszczyca", 87, 3, 2, "Copyright Strike", 777, 5);
    enemies[10] = Teacher("Rafał Wojciechowicz", 350, 21, 3, "Perpetuum Debile", 500, 5);
    enemies[11] = Teacher("Ptakryk Romanowski", 250, 30, 0, "Działko Psioniczne", 180, 5);
    enemies[12] = Teacher("Marcin Teresiński", 600, 0, 2, " Ktokolwiek Widział, Ktokolwiek Wie. ", 5, 50);
    enemies[13] = Teacher("Duet Franko", 1200, 15, 3, "Silniejsi Razem, a Hel jest Gazem ", 400, 5);
    enemies[14] = Teacher("Johnny Bravo", 120, 10, 3, "Suwmiarką po Kulach", 212, 5);
    //Deklaracja Bohaterów
    int choice;
    std::cout << "Czy chcesz wybrać istniejącego bohatera, czy napisać własną legendę? ( 1 / 2 ) : " << std::endl;
    std::cin >> choice;
    bool check = true;
    while (check)
    {
        if (choice == 1) //Wybór spośród predefiniowanych
        {
            check = false;
            std::cout << "Wybierz Bohatera: " << std::endl;
            show_student(259001, "Kamil Gnojnar", 1200, 17, 20, 35, 23);
            show_student(259002, "Darek Płytka", 3500, 22, 15, 18, 30);
            show_student(259003, "Bartłomiej Szirowaty", 2850, 25, 25, 25, 15);
            show_student(259004, "Andrzej Przemczak", 3200, 40, 30, 10, 10);
            show_student(259005, "Ludwik Szymoniak", 2500, 23, 31, 11, 19);
            show_student(999999, "Arku the Chad", 99999, 2137, 2137, 2137, 2137);
            bool req = true;
            while (req)
            {
                std::cout << "\nPodaj numer indeksu wybranego studenta: ";
                std::cin >> choice;
                switch (choice)
                {
                case 259001:
                    students = Student("Kamil Gnojnar", 1200, 17, 20, 35, 23);
                    req = false;
                    break;
                case 259002:
                    students = Student("Darek Płytka", 3500, 22, 15, 18, 30);
                    req = false;
                    break;
                case 259003:
                    students = Student("Bartłomiej Szirowaty", 2850, 25, 25, 25, 15);
                    req = false;
                    break;
                case 259004:
                    students = Student("Andrzej Przemczak", 3200, 40, 30, 10, 10);
                    req = false;
                    break;
                case 259005:
                    students = Student("Ludwik Szymoniak", 2500, 23, 31, 11, 19);
                    req = false;
                    break;
                case 999999:
                    students = Student("Arku the Chad", 99999, 2137, 2137, 2137, 2137);
                    req = false;
                    break;
                default:
                    std::cout << "Wprowadzono niewłaściwy numer indeksu. Spróbuj ponownie. " << std::endl;
                    break;
                }
            }
        }
        else if (choice == 2) //Stworzenie własnej postaci
        {
            check = false;
            std::cout << "Jak się nazywasz?: " << std::endl;
            std::string name;
            //std::cin >> name;
            int stats[5] = {0, 0, 0, 0, 0};
            std::cout << " Podaj kolejno ile ma wynosić" << std::endl;
            while (1)
            {
                std::cout << " Liczba punktów zdrowia (max. 5 000): ";
                std::cin >> stats[0];
                if (stats[0] <= 0 || stats[0] > 5000)
                {
                    std::cout << " Niepoprawna wartość, wprowadź poprawną liczbę." << std::endl;
                }
                else
                    break;
            }
            while (1)
            {
                std::cout << " Statystyka IT (max. 200): ";
                std::cin >> stats[1];
                if (stats[1] <= 0 || stats[1] > 200)
                {
                    std::cout << " Niepoprawna wartość, wprowadź poprawną liczbę." << std::endl;
                }
                else
                    break;
            }
            while (1)
            {
                std::cout << " Statystyka matematyki (max. 200): ";
                std::cin >> stats[2];
                if (stats[2] <= 0 || stats[2] > 200)
                {
                    std::cout << " Niepoprawna wartość, wprowadź poprawną liczbę." << std::endl;
                }
                else
                    break;
            }
            while (1)
            {
                std::cout << " Statystyka filozofii (max. 200): ";
                std::cin >> stats[3];
                if (stats[3] <= 0 || stats[3] > 200)
                {
                    std::cout << " Niepoprawna wartość, wprowadź poprawną liczbę." << std::endl;
                }
                else
                    break;
            }
            while (1)
            {
                std::cout << " Statystyka drylu (max. 200): ";
                std::cin >> stats[4];
                if (stats[4] <= 0 || stats[4] > 200)
                {
                    std::cout << " Niepoprawna wartość, wprowadź poprawną liczbę." << std::endl;
                }
                else
                    break;
            }
            students = Student(name, stats[0], stats[1], stats[2], stats[3], stats[4]);
        }
        else
            std::cout << " Wprowadzono niewłaściwy numer, wprowadź poprawny numer. ";
    }

    //Deklaracja Lokacji
    std::cout << "Wybierz rozmiar lokacji:\n( 1 ) krótka\n( 2 ) średnia\n( 3 ) długa" << std::endl;
    while (1)
    {
        std::cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3)
            break;
        else
            std::cout << " Wprowadzono niewłaściwy numer lokacji, wprowadź poprawny numer. ";
    }
    switch (choice)
    {
    case 1:
        locations = Location("C-16", 16);
        break;
    case 2:
        locations = Location("C-1", 24);
        break;
    case 3:
        locations = Location("C-13", 32);
        break;
    default:
        break;
    }
    //Deklaracja Przedmiotu Leczącego
    biwo = Biwo(300);

    //Deklaracja Znajdziek
    relic[0] = Relic("Pizza z Musztardą i Ananasem", 5, 0);
    relic[1] = Relic("Koci Żwirek", 5, 1);
    relic[2] = Relic("Teologia Kultury", 5, 2);
    relic[3] = Relic("Mikrofon", 5, 3);
}

Teacher Dziekanat::get_enemy(int index)
{
    return enemies[index];
}

void Dziekanat::simulation()
{
    int fights = 0, biwos = 0, relics = 0, rooms = 0, no_content = 0;

    std::cout << "Witaj przybyszu... Jak było Ci na imię? Ach... \nJuż wiem... " << students.get_name() << std::endl
              << "Tak...\n"
              << students.get_name() << std::endl
              << "Znalazłeś się tu dzięki swej odwadze, ale sama odwaga nie pomoże Ci tu powrócić... \nW środku czekają na Ciebie twoje najgorsze koszmary..."
              << std::endl
              << "Przyjdzie Ci się zmierzyć z arcypotężnymi wykładowcami BWR-u \ni tylko od Ciebie zależeć będzie to, czy doniesiesz swój indeks... do końca..." << std::endl;
    Sleep(10000);
    for (int i = locations.get_current_room(); i <= locations.get_length(); i++)
    {
        std::cout << "=======================================================================" << std::endl
                  << "Wchodzisz do pokoju. " << std::endl;
        switch (locations.randomize())
        {
        case 0:
            students.use_Biwo(biwo);
            biwos++;
            break;
        case 1:
            students.use_Relic(relic[Relic::randomize()]);
            relics++;
            break;
        case 2:
            students.fight(enemies[Teacher::randomize()]);
            fights++;
            break;
        case 3:
            std::cout << "W pokoju nic nie ma... Ale ściema..." << std::endl;
            no_content++;
            break;
        default:
            std::cout << "Coś poszło nie tak... Chyba JSOS spadł z rowerka..." << std::endl;

            break;
        }
        if (students.check_alive())
            students.move(locations);
        else
            break;
        Sleep(5000);
    }
    if (students.check_alive())
    {
        std::cout << "Gratulacje. Przetrwałeś w tym nieludzkim środowisku. " << std::endl;
    }
    else
        std::cout << "Wstawaj licealisto, zesrałeś się... BWR nie dla ciebie. " << std::endl;
    std::cout<<"W trakcie swojej przygody:\nWalczyłeś z "<<fights<<" przeciwnikami\nWypiłeś "<<biwos<<" biw\nZnalazłeś "<<relics<<" reliktów\nA "<<no_content<<" pokojów było pustych... ";
}