#ifndef FLOOR_H
#define FLOOR_H

#include <iostream>
#include <string>
#include "FloorGrid.h"

namespace FloorOrg
{
    class Floor
    {
    public:
        Floor();
        Floor(int pos_x, int pos_y);
        ~Floor();
        //void create_floor_grid(int pos_x, int pos_y);
        void print_floor();
        const std::string& name() const;
        FloorGrid   _floorGrid;

    private:
        std::string _name;
 //       mutable FloorGrid   _floorGrid;
    };
}

#endif // FLOOR_H
