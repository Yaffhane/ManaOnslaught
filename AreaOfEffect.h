/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AreaOfEffect.h
 * Author: iaphanemekki-felix
 *
 * Created on 7 novembre 2018, 15:51
 */

#ifndef AREAOFEFFECT_H
#define AREAOFEFFECT_H


class AreaOfEffect {
public:
    AreaOfEffect();
    AreaOfEffect(const AreaOfEffect& orig);
    virtual ~AreaOfEffect();
        
protected:
    int pxOffset, nxOffset, pyOffset, nyOffset; // x, -x, y, -y sur la cible de base
    bool fill; // 
};

#endif /* AREAOFEFFECT_H */

