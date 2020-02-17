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
<<<<<<< HEAD
float FormulaMin::calculate() {
    return min;
}
=======
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2

