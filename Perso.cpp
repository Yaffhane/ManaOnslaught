
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
                int dex, int pDef, int mDef,int pa, int pm, float crit)
        : Unit(hp, mp, str, it, fh, dex, pDef, mDef, pa, pm, crit)
{
    this->name=name;
    this->team=team;
}

        
Perso::Perso(const Perso& orig) {
}

Perso::~Perso() {
}

void Perso::consolePrint(){
    cout<< this->name << endl << this->team << endl;
    cout<< "Health :" << this->hp << "/" << this->hpMax << endl;
    cout<< "Mana: " << this->mp << "/" << this->mpMax << endl;
    cout<< "Stats: "<< endl;
    for(auto it = this->stats.cbegin(); it != this->stats.cend(); ++it){
        cout <<"    " <<it->first << " " << it->second << endl ;
    }
    
}

