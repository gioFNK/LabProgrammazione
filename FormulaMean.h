//
// Created by giofn on 08/01/2020.
//

#ifndef CELLE_FORMULAMEAN_H
#define CELLE_FORMULAMEAN_H



#include "Formula.h"

class FormulaMean: public Formula {
public:

    FormulaMean() : Formula(),mean(0) {}

    ~FormulaMean() {}

    void update() override ;

<<<<<<< HEAD
    float calculate() override ;
=======
    float getMean() const {
        return mean;
    }
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2

private:
    float mean;
};
#endif //CELLE_FORMULAMEAN_H
