//
// Created by giofn on 07/01/2020.
//


#include "Formula.h"
#include <algorithm>


void Formula::subscribe(Subject *cell) {
    cells.push_back(cell);
    update();
}

void Formula::unsubscribe(Subject *cell) {
    cells.remove(cell);
    update();
}


bool Formula::searchCell(Subject *cell) {
    auto itr= std::find(cells.begin(),cells.end(),cell);
    if(itr!=cells.end())
        return true;
    return false;
}
