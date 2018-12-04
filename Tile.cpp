/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tile.cpp
 * Author: iaphanemekki-felix
 * 
 * Created on 7 novembre 2018, 15:08
 */

#include "Tile.h"

Tile::Tile() {
    this->cost = 1;
    this->unitOnTile = NULL;
}

Tile::Tile(const Tile& orig) {
}

Tile::~Tile() {
}

void Tile::clearUnit() {
    this->unitOnTile = NULL;
}

void Tile::updateUnitOnTile(Perso* u) {
    this->unitOnTile = u;
}

Perso* Tile::getUnit(){
    return this->unitOnTile;
}