/* 
 * File:   GameMap.h
 * Author: iaphanemekki-felix
 *
 * Created on 7 novembre 2018, 17:58
 */

#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <map>
#include <vector>
#include "Tile.h"

using namespace std;

class GameMap {
public:
    GameMap();
    GameMap(const GameMap& orig);
    virtual ~GameMap();
    
    void mapInit(vector<int> size);
    void moveUnit(vector<int> newCoordinates, vector<int> oldCoordinates, Perso* unit);
    void placeUnit(vector<int> newCoordinates, Perso* unit);
    Unit* targetUnit(vector<int> coordinates); // retourne l'unit sur la case sélectionnée pour caster un sort dessus ou la sélectionner
    
    void setGamemode(int newGameMode);
    
    map<vector<int>, Tile*> getMapState(); // retourne la map
    Tile* getTile(vector<int> coordinates); // retourne l'addresse de la case sélectionnée
    
protected:
    int gamemode;
    vector<int> size;
    map<vector<int>, Tile*> field;
    int gameEnd;
    

};

#endif /* GAMEMAP_H */

