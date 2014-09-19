#ifndef FLOORCELL_H
#define FLOORCELL_H

#include <vector>
#include "FloorCellType.h"

namespace FloorOrg
{
    class FloorCell
    {
    public:
        FloorCell();
        virtual ~FloorCell();
        virtual FloorCellType type() const;
    };
}

#endif // FLOORCELL_H
