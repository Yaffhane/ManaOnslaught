/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Unit.cpp
 * Author: iaphanemekki-felix
 * 
 * Created on 6 novembre 2018, 12:25
 */

#include "Unit.h"

Unit::Unit(int hp, int mp, int str, int it,int fh, int dex, int pDef, int mDef,
            int pa, int pm){
    this->hp=hp;
    this->hpMax=hp;
    this->mp=mp;
    this->mpMax=mp;
    this->strength=str;
    this->intelligence=it;
    this->faith=fh;
    this->dexterity=dex;
    this->pDefence=pDef;
    this->mDefence=mDef;
    this->pa=pa;
    this->pm=pm;
}

Unit::Unit(const Unit& orig) {
}

Unit::~Unit() {
}

void Unit::updateHp(int cost){
    this->hp -= cost;
}

void Unit::updateMp(int cost){
    this->mp -= cost;
}

void Unit::updatePa(int cost) {
    this->pa -= cost;
}

void Unit::updatePm(int cost) {
    this->pm -= cost;
}
