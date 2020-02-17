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

<<<<<<< HEAD
    float calculate() override;
=======
    float getMin() const {
        return min;
    }
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2

private:
    float min;
};


#endif //CELLE_FORMULAMIN_H
