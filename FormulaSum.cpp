//
// Created by giofn on 08/01/2020.
//


#include "FormulaSum.h"
#include "Cell.h"

void FormulaSum::update() {
    sum=0;
    if(cells.size()>0){
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            sum+=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }
}

