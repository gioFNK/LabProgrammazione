//
// Created by giofn on 03/01/2020.
//

#ifndef CELLE_CELL_H
#define CELLE_CELL_H

#include "Subject.h"
#include "Formula.h"


class Cell:public Subject{

public:
    Cell():Subject(),value(0) {}

    ~Cell(){
        for (auto itr = formule.begin(); itr != formule.end(); itr++)
            (*itr)->unsubscribe(this);
    }

    void attach(Observer* formula) override ;
    void detach(Observer* formula) override ;
    void notify() override ;


    float getValue() const {
        return value;
    }

    void setValue(float value) {
        Cell::value = value;
        notify();
    }

    std::list<Formula*> getFormule(){
        return formule;
    }

    bool searchFormula(Observer * formula);


private:
    float value;
    std::list<Formula*> formule;

};

#endif //CELLE_CELL_H
