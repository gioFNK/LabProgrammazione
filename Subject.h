//
// Created by giofn on 03/01/2020.
//

#ifndef CELLE_SUBJECT_H
#define CELLE_SUBJECT_H


#include <string>
#include <list>
#include "Observer.h"

class Subject {

public:

    Subject(){}
    virtual ~Subject(){}

    virtual void attach(Observer * formula)=0;
    virtual void detach(Observer * formula)=0;
    virtual void notify()=0;


};

#endif //CELLE_SUBJECT_H
