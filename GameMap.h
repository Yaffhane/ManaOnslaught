/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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
    void moveUnit(vector<int> newCoordinates, vector<int> oldCoordinates, Unit* unit);
    void placeUnit(vector<int> newCoordinates, Unit* unit);
    Unit * targetUnit(vector<int> coordinates); // retourn l'unit sur la case sélectionné pour caster un sort dessus ou la sélectionner
    
    void setGamemode(int newGameMode);
    
protected:
    int gamemode;
    vector<int> size;
    map<vector<int>, Tile*> field;
    int gameEnd;
    

};

#endif /* GAMEMAP_H */

