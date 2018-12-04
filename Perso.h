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

using namespace std;


class Perso: public Unit {
public:
   
    Perso();
    Perso(const Perso& orig);
    virtual ~Perso();
    
    //partie get
    string getName();
    string getTeam();
    Job getJob();
    
private:
    double _id;
    string name;
    string team;
    Job job;
   
};

#endif /* PERSO_H */

