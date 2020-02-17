//
// Created by giofn on 03/01/2020.
//

#ifndef CELLE_CELL_H
#define CELLE_CELL_H

#include "Subject.h"
<<<<<<< HEAD
#include "Formula.h"


class Cell:public Subject{
=======



class Cell :public Subject{
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2

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

<<<<<<< HEAD
    std::list<Formula*> getFormule(){
        return formule;
    }

    bool searchFormula(Observer * formula);
=======
    std::list<Observer*> getFormule(){
        return formule;
    }

    testing::AssertionResult searchFormula(Observer* formula);
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2


private:
    float value;
<<<<<<< HEAD
    std::list<Formula*> formule;
=======
    std::list<Observer*> formule;
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2

};

#endif //CELLE_CELL_H
