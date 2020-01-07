#include <iostream>
#include "FormulaMax.h"
#include "Table.h"

int main() {
    int x=0;
    Table* table=new Table(2,2);
    FormulaMax* formulaMax=new FormulaMax();

    (table->getCell(0,0))->attach(formulaMax);
    (table->getCell(1,1))->attach(formulaMax);
    table->setCellValue(10,0,0);
    table->setCellValue(5,1,1);
    x=(table->getCell(0,0))->getValue();
    x=(table->getCell(1,1))->getValue();
    x=formulaMax->getMax();
    std::cout<<x;
    return 0;
}