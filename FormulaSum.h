//
// Created by giofn on 08/01/2020.
//

#ifndef CELLE_FORMULASUM_H
#define CELLE_FORMULASUM_H


#include "Formula.h"

class FormulaSum: public Formula {
public:

    FormulaSum() : Formula(),sum(0) {}

    ~FormulaSum() {}

    void update() override ;


    float calculate() override;


private:
    float sum;
};
#endif //CELLE_FORMULASUM_H
