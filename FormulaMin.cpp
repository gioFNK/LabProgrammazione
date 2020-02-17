//
// Created by giofn on 08/01/2020.
//

#include "FormulaMin.h"
#include "Cell.h"
void FormulaMin::update() {
    min=0;
    if(cells.size()>0){
        min=dynamic_cast<Cell*>((*(cells.begin())))->getValue();
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            if(dynamic_cast<Cell*>((*itr))->getValue()<min)
                min=dynamic_cast<Cell*>((*itr))->getValue();
        }
    }
}
float FormulaMin::calculate() {
    return min;
}


