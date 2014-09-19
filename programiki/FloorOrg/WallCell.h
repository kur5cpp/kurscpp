#ifndef WALL_H
#define WALL_H

#include "FloorCell.h"

namespace FloorOrg
{
    class WallCell : public FloorCell
    {
    public:
        WallCell(){}
        ~WallCell(){}
        virtual FloorCellType type() const
        {
            return Wall;
        }
    };
}

#endif // WALL_H
