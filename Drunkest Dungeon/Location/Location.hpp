#pragma once

class Location
{
    private:

    int length;
    int current_room;

    public:
  
    Location();
    
    Location( int size );

    int get_length( );

    int get_current_room();

    int randomize();
    
    void next_room();

};