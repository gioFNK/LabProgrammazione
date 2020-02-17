//
// Created by giofn on 07/01/2020.
//


#include "Formula.h"
<<<<<<< HEAD
=======
#include "test/lib/googletest/include/gtest/gtest.h"
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
#include <algorithm>


void Formula::subscribe(Subject *cell) {
    cells.push_back(cell);
    update();
}

void Formula::unsubscribe(Subject *cell) {
    cells.remove(cell);
    update();
}


<<<<<<< HEAD
bool Formula::searchCell(Subject *cell) {
=======
testing::AssertionResult Formula::searchCell(Subject *cell) {
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
    auto itr= std::find(cells.begin(),cells.end(),cell);
    if(itr!=cells.end())
        return true;
    return false;
}
