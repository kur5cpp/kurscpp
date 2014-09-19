#ifndef WORKSPACECELL_H
#define WORKSPACECELL_H

#include "FloorCell.h"

namespace FloorOrg
{
    class WorkspaceCell : public FloorCell
    {
    public:
        WorkspaceCell(){}
        virtual FloorCellType type() const;
    };
}

#endif // WORKSPACECELL_H
