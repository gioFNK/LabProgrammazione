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
            Subject* cell= dynamic_cast<Subject*>(*itr);
            if(cell)
                cell->detach(this);
        }
    }

    void subscribe(Subject* cell) override ;
    void unsubscribe(Subject* cell)  override ;

    virtual float calculate()=0;

    bool searchCell(Subject * cell);

protected:
    std::list<Subject*> cells;
};
#endif //CELLE_FORMULA_H
