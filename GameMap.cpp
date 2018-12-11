
/* 
 * File:   GameMap.cpp
 * Author: iaphanemekki-felix
 * 
 * Created on 7 novembre 2018, 17:58
 */

#include "GameMap.h"
#include <iostream>

GameMap::GameMap() {
}

GameMap::GameMap(const GameMap& orig) {
}

GameMap::~GameMap() {
}

void GameMap::moveUnit(vector<int> newCoordinates,vector<int> oldCoordinates, Perso* unit) {
    this->field[newCoordinates]->updateUnitOnTile(unit);
    this->field[oldCoordinates]->clearUnit();
}

void GameMap::placeUnit(vector<int> newCoordinates, Perso* unit) {
    this->field[newCoordinates]->updateUnitOnTile(unit);
}

void GameMap::mapInit(vector<int> size) {
    for(int i=0; i<size[0]; i++) {
        for(int j=0; j<size[0]; j++) {
            this->field[{i,j}] = new Tile  ;
        }
    }
}

Tile* GameMap::getTile(vector<int> coordinates){
    return this->field[coordinates];
}

void GameMap::ResolveEventSkill(Tile* targetedTile, Unit* castingUnit, ActiveSkill* castedSkill){
    
}