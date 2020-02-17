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

<<<<<<< HEAD
    virtual void SetUp();
=======
    virtual void SetUp(){
        table=new Table(10,10);
        formulaSum=new FormulaSum;
        formulaMax=new FormulaMax;
        formulaMin=new FormulaMin;
        formulaMean=new FormulaMean;

        table->setCellValue(10.5,0,0);
        table->setCellValue(20.5,0,1);
        table->setCellValue(30,0,2);
        table->getCell(0,0)->attach(formulaSum);
        table->getCell(0,0)->attach(formulaMin); // cella in posizione 0,0 iscritta a ForumulaSum e ForumulaMin
        table->getCell(0,1)->attach(formulaMin);
        table->getCell(0,1)->attach(formulaMax);
        table->getCell(0,1)->attach(formulaMean);// cella in posizione 0,1 iscritta a ForumulaMin, ForumulaMax e ForumulaMean
        table->getCell(0,2)->attach(formulaSum);
        table->getCell(0,2)->attach(formulaMin);
        table->getCell(0,2)->attach(formulaMean); // cella in posizione 0,2 iscritta a ForumulaSum, ForumulaMin e ForumulaMean

    }
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2

    Formula* formulaSum;
    Formula* formulaMax;
    Formula* formulaMin;
    Formula* formulaMean;

    Table* table;

};

TEST_F(FormuleTest, FormulaMax){

<<<<<<< HEAD
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
=======
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
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
}

TEST_F(FormuleTest, DeleteFormula){
delete formulaMin;
ASSERT_EQ(1,table->getCell(0,0)->getFormule().size());

}



#endif //CELLE_FORMULETEST_H
