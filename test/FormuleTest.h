//
// Created by giofn on 13/01/2020.
//

#ifndef CELLE_FORMULETEST_H
#define CELLE_FORMULETEST_H



#include "gtest/gtest.h"
#include "../Table.h"
#include "../FormulaSum.h"
#include "../FormulaMax.h"
#include "../FormulaMean.h"
#include "../FormulaMin.h"

class FormuleTest: public testing::Test{


protected:
    virtual void SetUp();

    Formula* formulaSum;
    Formula* formulaMax;
    Formula* formulaMin;
    Formula* formulaMean;

    Table* table;

};





#endif //CELLE_FORMULETEST_H
