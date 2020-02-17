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


    float calculate() override ;


private:
    float mean;
};
#endif //CELLE_FORMULAMEAN_H
