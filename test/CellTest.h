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

    virtual void SetUp(){
        cell=new Cell;
        formulaSum=new FormulaSum;
    }

    Cell* cell;
    Formula* formulaSum;
};



TEST_F(CellTest,CellConstructor ){

    ASSERT_EQ(0, cell->getValue());
    ASSERT_EQ(1,1);
}


TEST_F(CellTest,Attach){
cell->attach(formulaSum);
    ASSERT_TRUE(formulaSum->searchCell(cell));
    ASSERT_TRUE(cell->searchFormula(formulaSum));
}

TEST_F(CellTest,Detach){
    cell->attach(formulaSum);
    cell->detach(formulaSum);
    ASSERT_FALSE(formulaSum->searchCell(cell));
}


TEST_F(CellTest,Notify){

    cell->attach(formulaSum);
    ASSERT_EQ(0, dynamic_cast<FormulaSum*>(formulaSum)->getSum());
    cell->setValue(10); //Il metodo setValue invoca Notify quindi si testa funzionamento del metodo Notify chiamando setValue
    ASSERT_EQ(10, dynamic_cast<FormulaSum*>(formulaSum)->getSum());
}

TEST_F(CellTest, DuplicateFormule){
    cell->attach(formulaSum);
    cell->attach(formulaSum);
    ASSERT_EQ(1,cell->getFormule().size());
}
#endif //CELLE_CELLTEST_H
