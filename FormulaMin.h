//
// Created by giofn on 08/01/2020.
//

#ifndef CELLE_FORMULAMIN_H
#define CELLE_FORMULAMIN_H



#include "Formula.h"

class FormulaMin: public Formula {
public:

    FormulaMin() : Formula(),min(0) {}

    ~FormulaMin() {}

    void update() override ;

    float calculate() override;

private:
    float min;
};


#endif //CELLE_FORMULAMIN_H
