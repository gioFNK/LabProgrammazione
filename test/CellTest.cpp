//
// Created by giofnk on 21/02/20.
//

#include "CellTest.h"

void CellTest::SetUp(){
    cell=new Cell;
    formulaSum=new FormulaSum;
}



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
    cell->setValue(10); //Il metodo setValue invoca Notify quindi si testa funzionamento di quest'ultimo
    ASSERT_EQ(10, dynamic_cast<FormulaSum*>(formulaSum)->calculate());
}

TEST_F(CellTest, DuplicateFormule){
    cell->attach(formulaSum);
    cell->attach(formulaSum);
    ASSERT_EQ(1,cell->getFormule().size());
}
