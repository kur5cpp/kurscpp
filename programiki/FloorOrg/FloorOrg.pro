TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Floor.cpp \
    WallCell.cpp \
    WorkspaceCell.cpp

HEADERS += \
    Floor.h \
    FloorGrid.h \
    FloorCell.h \
    FloorCellType.h \
    WallCell.h \
    WorkspaceCell.h

