//
// Created by giofn on 03/01/2020.
//


#include "Cell.h"
<<<<<<< HEAD
#include "Formula.h"

void Cell::attach(Observer * formula) {
    if(!searchFormula(dynamic_cast<Formula *>(formula))) {
=======
#include "test/lib/googletest/include/gtest/gtest.h"

void Cell::attach(Observer * formula) {
    if(!searchFormula(formula)) {
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
        formule.push_back(formula);
        formula->subscribe(this);
    }
}


void Cell::detach(Observer * formula) {
<<<<<<< HEAD
    if(searchFormula(dynamic_cast<Formula *>(formula))) {
=======
    if(searchFormula(formula)) {
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
        formule.remove(formula);
        formula->unsubscribe(this);
    }
}


void Cell::notify() {
    for (auto itr = formule.begin(); itr != formule.end(); itr++)
        (*itr)->update();
}

<<<<<<< HEAD
bool Cell::searchFormula(Observer * formula){
=======
testing::AssertionResult Cell::searchFormula(Observer* formula){
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
    for (auto itr = formule.begin(); itr != formule.end(); itr++) {
        if((*itr)==formula)
            return true;
    }
    return false;
}