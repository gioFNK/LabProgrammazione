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

<<<<<<< HEAD
    float calculate() override;
=======
    float getMax() const {
        return max;
    }
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2


private:
    float max;
};
#endif //CELLE_FORMULAMAX_H
