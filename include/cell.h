#ifndef CELL_H
#define CELL_H

#include <iostream>

struct Cell{char left; char bot ; bool visited; double size;} empty_cell ={' ',' ', false, 10.}, full_cell={'|','_',false,10.};

    /**
     *       \struct Cell
     *
     *       \brief Object of Maze
     *
     *        This is a single cell unit
     *
     *          left is ' |' for a wall, ' ' else
     *          bot is '_' for a wall, ' ' otherwise
     *              visited is True if cell is visited, False otherwise
     *              size is a positive double corresponding to the number of pixels on a side
     *
     */




#endif
