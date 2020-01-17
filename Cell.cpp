//
// Created by giofn on 03/01/2020.
//


#include "Cell.h"
#include "test/lib/googletest/include/gtest/gtest.h"

void Cell::attach(Observer * formula) {
    if(!searchFormula(formula)) {
        formule.push_back(formula);
        formula->subscribe(this);
    }
}


void Cell::detach(Observer * formula) {
    if(searchFormula(formula)) {
        formule.remove(formula);
        formula->unsubscribe(this);
    }
}


void Cell::notify() {
    for (auto itr = formule.begin(); itr != formule.end(); itr++)
        (*itr)->update();
}

testing::AssertionResult Cell::searchFormula(Observer* formula){
    for (auto itr = formule.begin(); itr != formule.end(); itr++) {
        if((*itr)==formula)
            return true;
    }
    return false;
}