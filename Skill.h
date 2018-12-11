

/* 
 * File:   Skill.h
 * Author: iaphanemekki-felix
 *
 * Created on 6 novembre 2018, 14:03
 */

#ifndef SKILL_H
#define SKILL_H

#include <string>
#include <vector>
#include "AreaOfEffect.h"

using namespace std;

class BaseSkill {
public:
    
    BaseSkill();
    BaseSkill(const BaseSkill& orig);
    
    bool simulate(); // check si le skill est applicable
    virtual void computeEffect(vector<int> unitStats) = 0; // applique les effets du skill
    
    virtual ~BaseSkill();
    
protected:
    
    double _id;
    string name;
    AreaOfEffect AoE;
    
};

#endif /* SKILL_H */

