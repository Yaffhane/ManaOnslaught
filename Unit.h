
/* 
 * File:   Unit.h
 * Author: iaphanemekki-felix
 *
 * Created on 6 novembre 2018, 12:25
 */

#ifndef UNIT_H
#define UNIT_H

#include "ActiveSkill.h"
#include <list>

using namespace std;
        
class Unit {
public:
    Unit(int hp=200, int mp=100, int str=10, int it=10, int fh=10, int dex=10,
            int pDef=5, int mDef=2,int pa=3, int pm=3);
    Unit(const Unit& orig);
    virtual ~Unit();
    
    int castSkill(Unit * target, ActiveSkill skill);
    
    //partie update
    void updateHp(int cost);
    void updateMp(int cost);
    void updatePa(int cost);
    void updatePm(int cost);
    
    // partie get
    int gethp();
    int getmp();
    int gethpMax();
    int getmpMax();
    
    list<int> getStats();
    float getCrit();
    
protected:
    
    // health and ressource
    int hp, hpMax;
    int mp, mpMax;
    
    // statistiques, à mettre sous forme de tab ?
    int strength, intelligence, faith, dexterity, pDefence, mDefence;
    float crit; // 0 <= crit <= 1

    // skills
    int nb_skills;
    list<ActiveSkill> skillList; // liste de skill pour l'unit
    
    // action & mouvement
    int pa;
    int pm;
};

#endif /* UNIT_H */

