//
// Created by giofn on 04/01/2020.
//

#ifndef CELLE_TABLE_H
#define CELLE_TABLE_H

#include "Cell.h"
//#include "Observer.h"
#include <stdexcept>

class Table {

public:
    Table(int row, int column);

    ~Table(){
        delete[] cells;
    }

    Cell * getCell(int row,int column) const {
        if(row<numRow && row>=0 && column<numColumn && column>=0)
            return &(cells[row*numColumn+column]);
        return nullptr;
    }

    void setCellValue(float value, int row,int column){
        if (row < numRow && row >= 0 && column < numColumn && column >= 0)
            cells[row * numColumn + column].setValue(value);
    }


    int getNumRow() const {
        return numRow;
    }

    void setNumRow(int numRow) {
        Table::numRow = numRow;
    }

    int getNumColumn() const {
        return numColumn;
    }

    void setNumColumn(int numColumn) {
        Table::numColumn = numColumn;
    }

private:
    Cell* cells;
    int numRow;
    int numColumn;

};

#endif //CELLE_TABLE_H
