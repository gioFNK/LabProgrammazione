#include <iostream>
#include "FormulaMax.h"
#include "Table.h"
#include "FormulaMean.h"
#include "FormulaMin.h"
#include "FormulaSum.h"

int main() {
    float x=0;
    Table* table=new Table(2,2);
    FormulaMax* formulaMax=new FormulaMax();
    FormulaMean* formulaMean=new FormulaMean();
    FormulaMin* formulaMin=new FormulaMin();
    FormulaSum* formulaSum=new FormulaSum();

    (table->getCell(0,0))->attach(formulaMax);
    (table->getCell(1,1))->attach(formulaMax);
    (table->getCell(0,0))->attach(formulaMean);
    (table->getCell(1,1))->attach(formulaMean);
    (table->getCell(0,0))->attach(formulaMin);
    (table->getCell(1,1))->attach(formulaMin);
    (table->getCell(0,0))->attach(formulaSum);
    (table->getCell(1,1))->attach(formulaSum);
    table->setCellValue(10,0,0);
    table->setCellValue(5,1,1);
    x=formulaMax->getMax();
    std::cout<<x<<"\n";
    x=formulaMean->getMean();
    std::cout<<x<<"\n";
    x=formulaMin->getMin();
    std::cout<<x<<"\n";
    x=formulaSum->getSum();
    std::cout<<x<<"\n";
    return 0;
}

/*
#include <QApplication>
#include <QPushButton>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QPushButton button("Hello world !");
    button.show();

    return app.exec();
}*/
