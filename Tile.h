

/* 
 * File:   Tile.h
 * Author: iaphanemekki-felix
 *
 * Created on 7 novembre 2018, 15:08
 */

#ifndef TILE_H
#define TILE_H

#include "Perso.h"

using namespace std;

class Tile {
public:
    
    Tile();
    Tile(const Tile& orig);
    virtual ~Tile();
    
    void updateUnitOnTile(Perso * u);
    void clearUnit();
    Perso* getUnit();
    
private:
    int cost; // coût en pm pour venir sur la case
    Perso * unitOnTile; // unit présent sur la case

};

#endif /* TILE_H */

