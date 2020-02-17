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
<<<<<<< HEAD
float FormulaSum::calculate() {
    return sum;
}
=======
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2

