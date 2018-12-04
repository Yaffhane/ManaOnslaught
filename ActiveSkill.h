
/* 
 * File:   ActiveSkill.h
 * Author: iaphanemekki-felix
 *
 * Created on 7 novembre 2018, 14:48
 */

#ifndef ACTIVESKILL_H
#define ACTIVESKILL_H

#include "Skill.h"

using namespace std;

class ActiveSkill: public BaseSkill {  // direct damage/heal skill
public:
    int type;
    
    ActiveSkill();
    ActiveSkill(const ActiveSkill& orig);
    
    void apply();
    
    virtual ~ActiveSkill();
    
protected:
    string effectiveStat; // stat qui influe sur les effets du sort
    float ratio;
    
    int baseDamage; // negative for healing
    int range;
    int manacost;
            
};

#endif /* ACTIVESKILL_H */

