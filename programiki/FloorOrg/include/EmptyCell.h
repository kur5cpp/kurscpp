#ifndef EMPTYCELL_H
#define EMPTYCELL_H


#include "../FloorCell.h"

namespace FloorOrg
{
    class EmptyCell : public FloorCell
    {
    public:
        EmptyCell();
        virtual ~EmptyCell();
        virtual FloorCellType type() const
        {
            return Empty;
        }
    };
}

#endif // EMPTYCELL_H
