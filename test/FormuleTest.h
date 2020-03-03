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

TEST_F(FormuleTest, FormulaMax){

ASSERT_EQ(dynamic_cast<FormulaMax*>(formulaMax)->calculate(),20.5);
}

TEST_F(FormuleTest,FormulaMin){
ASSERT_EQ(dynamic_cast<FormulaMin*>(formulaMin)->calculate(),10.5);
}

TEST_F(FormuleTest,FormulaMean){
ASSERT_EQ(dynamic_cast<FormulaMean*>(formulaMean)->calculate(),((20.5+30)/2));
}

TEST_F(FormuleTest,FormulaSum){
ASSERT_EQ(dynamic_cast<FormulaSum*>(formulaSum)->calculate(),40.5);
ASSERT_EQ(dynamic_cast<FormulaMax*>(formulaMax)->getMax(),20.5);
}

TEST_F(FormuleTest,FormulaMin){
ASSERT_EQ(dynamic_cast<FormulaMin*>(formulaMin)->getMin(),10.5);
}

TEST_F(FormuleTest,FormulaMean){
ASSERT_EQ(dynamic_cast<FormulaMean*>(formulaMean)->getMean(),((20.5+30)/2));
}

TEST_F(FormuleTest,FormulaSum){
ASSERT_EQ(dynamic_cast<FormulaSum*>(formulaSum)->getSum(),40.5);
}

TEST_F(FormuleTest, DeleteFormula){
delete formulaMin;
ASSERT_EQ(1,table->getCell(0,0)->getFormule().size());

}



#endif //CELLE_FORMULETEST_H
