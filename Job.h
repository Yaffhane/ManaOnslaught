
/* 
 * File:   Job.h
 * Author: iaphanemekki-felix
 *
 * Created on 6 novembre 2018, 14:06
 */

#ifndef JOB_H
#define JOB_H

#include <string>
#include <list>
#include "ActiveSkill.h"

using namespace std;

class Job {
public:
    Job();
    Job(const Job& orig);
    virtual ~Job();
    
protected:
    string jobName;
    list<ActiveSkill> ActiveSkillJobList ; // tout les sorts dispo pour le job

};

#endif /* JOB_H */

