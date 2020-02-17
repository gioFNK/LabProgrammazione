//
// Created by giofnk on 15/02/20.
//
#include "FormuleTest.h"

void FormuleTest::SetUp(){
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

};