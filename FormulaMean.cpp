//
// Created by giofn on 08/01/2020.
//


#include "FormulaMean.h"
#include "Cell.h"

void FormulaMean::update(){
    mean=0;
    float sum=0;
    if(cells.size()>0){
        for(auto itr=cells.begin();itr!=cells.end();itr++){
            sum+=dynamic_cast<Cell*>((*itr))->getValue();
        }
        mean=sum/cells.size();
    }
}
float FormulaMean::calculate(){
    return mean;
}