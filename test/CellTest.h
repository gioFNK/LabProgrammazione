//
// Created by giofn on 13/01/2020.
//

#ifndef CELLE_CELLTEST_H
#define CELLE_CELLTEST_H


#include "gtest/gtest.h"

#include "../Cell.h"
#include "../FormulaSum.h"

class CellTest: public testing::Test{

protected:

    virtual void SetUp();
    Cell* cell;
    Formula* formulaSum;
};


#endif //CELLE_CELLTEST_H
