//
// Created by giofn on 03/01/2020.
//

#ifndef CELLE_OBSERVER_H
#define CELLE_OBSERVER_H

class Subject;

class Observer{

public:

    Observer(){}

    virtual ~Observer(){}
    virtual void subscribe(Subject* cell)=0;
    virtual void unsubscribe(Subject* cell)=0;
    virtual void update()=0;


};

#endif //CELLE_OBSERVER_H
