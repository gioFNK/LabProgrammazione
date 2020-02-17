//
// Created by giofn on 07/01/2020.
//

#ifndef CELLE_FORMULA_H
#define CELLE_FORMULA_H


#include <list>
#include "Observer.h"
#include "Cell.h"

class Formula: public Observer {

public:

    Formula(){ }

    virtual ~Formula(){
        for (auto itr = cells.begin(); itr != cells.end(); itr++){
<<<<<<< HEAD
            Subject* cell= dynamic_cast<Subject*>(*itr);
=======
            Cell* cell= dynamic_cast<Cell*>(*itr);
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
            if(cell)
                cell->detach(this);
        }
    }

    void subscribe(Subject* cell) override ;
    void unsubscribe(Subject* cell)  override ;

<<<<<<< HEAD
    virtual float calculate()=0;

    bool searchCell(Subject * cell);
=======
    testing::AssertionResult searchCell(Subject* cell);
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2

protected:
    std::list<Subject*> cells;
};
#endif //CELLE_FORMULA_H
