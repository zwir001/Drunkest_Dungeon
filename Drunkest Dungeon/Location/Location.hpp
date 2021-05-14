#pragma once

class Location
{
    private:

    int length;
    int current_room;

    public:

    void get_length( int length );

    void get_current_room();

    int randomize();

};