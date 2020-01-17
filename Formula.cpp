//
// Created by giofn on 07/01/2020.
//


#include "Formula.h"
#include "test/lib/googletest/include/gtest/gtest.h"
#include <algorithm>


void Formula::subscribe(Subject *cell) {
    cells.push_back(cell);
    update();
}

void Formula::unsubscribe(Subject *cell) {
    cells.remove(cell);
    update();
}


testing::AssertionResult Formula::searchCell(Subject *cell) {
    auto itr= std::find(cells.begin(),cells.end(),cell);
    if(itr!=cells.end())
        return true;
    return false;
}
