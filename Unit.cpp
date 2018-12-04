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

Unit::Unit() {
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
