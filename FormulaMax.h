//
// Created by giofn on 07/01/2020.
//

#ifndef CELLE_FORMULAMAX_H
#define CELLE_FORMULAMAX_H

#include "Formula.h"

class FormulaMax: public Formula {
public:

    FormulaMax() : Formula(),max(0) { }

    ~FormulaMax() {}

    void update() override ;

    float calculate() override;


private:
    float max;
};
#endif //CELLE_FORMULAMAX_H
