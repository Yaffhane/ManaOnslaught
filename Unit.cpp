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
            int pa, int pm, float crit){
    this->hp=hp;
    this->hpMax=hp;
    this->mp=mp;
    this->mpMax=mp;
    this->stats["strength"]=str;
    this->stats["intelligence"]=it;
    this->stats["faith"]=fh;
    this->stats["dexterity"]=dex;
    this->stats["pDefence"]=pDef;
    this->stats["mDefence"]=mDef;
    this->pa=pa;
    this->pm=pm;
    this->crit=crit;
}

Unit::Unit(const Unit& orig) {
}

Unit::~Unit() {
}

void Unit::updateHp(int cost){
    this->hp -= cost;
    if(this->hp < 0){
        this->hp = 0;
    }else if(this->hp > this->hpMax){
        this->hp = this->hpMax;
    }
}

void Unit::updateMp(int cost){
    this->mp -= cost;
    if(this->mp < 0){
        this->mp = 0;
    }else if(this->mp > this->mpMax){
        this->mp = this->mpMax;
    }
}

void Unit::updatePa(int cost) {
    this->pa -= cost;
}

void Unit::updatePm(int cost) {
    this->pm -= cost;
}

bool Unit::applyCost(int hpCost, int manaCost, int paCost, int pmCost) {
    
    this->updateHp(hpCost);
    this->updateMp(manaCost);
    this->updatePa(paCost);
    this->updatePm(pmCost);
    
    return 1;
}

bool Unit::applyEffect(int damage) {
    this->updateHp(damage);
    return 1;
}
