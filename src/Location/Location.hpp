#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <string>

class Location
{
    private:
    std::string name; 
    int length;
    int current_room;

    public:
    Location(){};
    
    Location(std::string name, int size );


    int get_length( );

    std::string get_name();
    
    int get_current_room();

    static int randomize();
    
    void next_room();

};

#endif