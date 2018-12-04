
/* 
 * File:   Perso.cpp
 * Author: iaphanemekki-felix
 * 
 * Created on 6 novembre 2018, 13:48
 */

#include "Perso.h"

using namespace std;

Perso::Perso(){
    
}

Perso::Perso(string name, string team, int hp, int mp, int str, int it, int fh,
                int dex, int pDef, int mDef,int pa, int pm)
        : Unit(hp, mp, str, it, fh, dex, pDef, mDef, pa, pm)
{
    this->name=name;
    this->team=team;
}

        
Perso::Perso(const Perso& orig) {
}

Perso::~Perso() {
}

ostream& operator<<(ostream& os, const Perso& perso)  
{  
    os << perso.name << " #" << perso.team << endl;
    return os;  
}  

