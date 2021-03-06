//
// Created by rarce on 03/10/20.
// Edited by Luis Fernando Javier Velazquez Sosa
//

#ifndef DOUBLECIRCULARLIST_JOB_H
#define DOUBLECIRCULARLIST_JOB_H


#ifndef CPUSCHEDULER_JOB_H
#define CPUSCHEDULER_JOB_H

#include <string>
#include <iostream>
using namespace std;


class Job {
private:
    int id;
    int start;
    int duration;
public:
    Job(int _id, int _start, int duration);
    string toString() const;
    int getID()const;
    int getStart() const;
    int getDuration() const;
};



#endif //CPUSCHEDULER_JOB_H

#endif //DOUBLECIRCULARLIST_JOB_H
