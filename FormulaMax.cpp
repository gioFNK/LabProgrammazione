//
// Created by giofn on 07/01/2020.
//


#include "FormulaMax.h"
#include "Cell.h"

void FormulaMax::update() {
    max=0;
    if(cells.size()>0){
        max = dynamic_cast<Cell *>(*(cells.begin()))->getValue();
        for (auto itr = cells.begin(); itr != cells.end(); itr++) {
            if (dynamic_cast<Cell *>((*itr))->getValue() > max)
                max = dynamic_cast<Cell *>((*itr))->getValue();
        }
    }
<<<<<<< HEAD
}
float FormulaMax::calculate(){
    return max;
=======
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
}