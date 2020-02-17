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

<<<<<<< HEAD
    float calculate() override;
=======
    float getSum() const {
        return sum;
    }
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2

private:
    float sum;
};
#endif //CELLE_FORMULASUM_H
