

/* 
 * File:   Tile.h
 * Author: iaphanemekki-felix
 *
 * Created on 7 novembre 2018, 15:08
 */

#ifndef TILE_H
#define TILE_H

#include "Unit.h"

using namespace std;

class Tile {
public:
    
    Tile();
    Tile(const Tile& orig);
    virtual ~Tile();
    
    void updateUnitOnTile(Unit * u);
    void clearUnit();
    void getUnit();
    
private:
    int cost; // coût en pm pour venir sur la case
    Unit * unitOnTile; // unit présent sur la case

};

#endif /* TILE_H */

