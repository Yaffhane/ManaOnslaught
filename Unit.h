
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
#include <map>

using namespace std;
        
class Unit {
public:
    Unit(int hp=200, int mp=100, int str=10, int it=10, int fh=10, int dex=10,
            int pDef=5, int mDef=2,int pa=3, int pm=3, float crit=0);
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
    
    map<string, int> getStats();
    float getCrit();
    
    // partie skill
    bool applyCost(int manaCost=0, int pmCost=0, int paCost=0, int hpCost=0);
    bool applyEffect(int damage/*, effect* buff*/);
    
    void consolePrint();
    
protected:
    
    // health and ressource
    int hp, hpMax;
    int mp, mpMax;
    
    // statistiques, à mettre sous forme de tab ?
    map<string, int> stats;
    float crit; // 0 <= crit <= 1

    // skills
    int nb_skills;
    list<ActiveSkill> skillList; // liste de skill pour l'unit
    
    // action & mouvement
    int pa;
    int pm;
};

#endif /* UNIT_H */

