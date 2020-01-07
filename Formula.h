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
            Cell* cell= dynamic_cast<Cell*>(*itr);
            if(cell)
                cell->detach(this);
        }
    }

    void subscribe(Subject* cell) override ;
    void unsubscribe(Subject* cell)  override ;

    bool searchCell(Subject* cell);

protected:
    std::list<Subject*> cells;
};
#endif //CELLE_FORMULA_H
