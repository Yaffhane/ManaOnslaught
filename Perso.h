/* 
 * File:   Perso.h
 * Author: iaphanemekki-felix
 *
 * Created on 6 novembre 2018, 13:48
 */

#ifndef PERSO_H
#define PERSO_H

#include "Unit.h"
#include "Job.h"
#include <iostream>  


using namespace std;


class Perso: public Unit {
public:
   
    Perso(string name, string team, int hp=200, int mp=100, int str=10,
            int it=10, int fh=10, int dex=10, int pDef=5, int mDef=2,
            int pa=3, int pm=3, float crit=0);
    
    Perso();
    
    Perso(const Perso& orig);
    virtual ~Perso();
    
    //partie get
    string getName();
    string getTeam();
    Job getJob();
    
    void consolePrint();
    
private:
    double _id;
    string name;
    string team;
    Job job;
   
};

#endif /* PERSO_H */

