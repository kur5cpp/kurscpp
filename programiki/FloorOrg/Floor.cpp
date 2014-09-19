#include "Floor.h"
#include "WallCell.h"
#include "EmptyCell.h"

namespace FloorOrg
{
    Floor::Floor()
    {

    }

    Floor::Floor(int pos_x, int pos_y)
    {
        EmptyCell _empty;
        for(int i=0; i<pos_y; ++i)
            for(int j=0; j<pos_x; ++j)
                _floorGrid.at(i).at(j)=_empty;
    }

    Floor::~Floor()
    {

    }

    void Floor::print_floor()
    {
        int size_x=_floorGrid.size();
        int size_y=_floorGrid.at(0).size();
        for(int i=0; i<size_x; ++i){
            for(int j=0; j<size_y; ++j){
                std::cout<<_floorGrid.at(i).at(j).type();
            }
            std::cout<<std::endl;
        }
    }



//    void create_floor_grid(int pos_x, int pos_y)
//    {
////        WallCell w;
////        for(int i=0; i<pos_y; ++i)
////                _floorGrid.pushback(vector<>)
////                for(int j=0; i<pos_x; ++i)
////                _floorGrid.pushback(w)
////
////        Floor::_floorGrid[pos_x][pos_y]=w;
//    }
}
