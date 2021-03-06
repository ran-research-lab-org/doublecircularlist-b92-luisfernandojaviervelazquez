//
// Created by rarce on 03/10/20.
// Edited by Luis Fernando Javier Velazquez Sosa
//


#include "Job.h"
#include <iostream>
using namespace std;


Job::Job(int _id, int _start, int _duration) :
        id(_id), start(_start), duration(_duration) {}


string Job::toString() const {
    return "[" + to_string(id) + " " + to_string(start) + " " + to_string(duration) + "]";
}

int Job::getID() const {
    return id;
}

int Job:: getStart()const {
    return start;
}

int Job :: getDuration()const{
    return duration;
}