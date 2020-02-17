//
// Created by giofn on 04/01/2020.
//


#include "Table.h"


Table::Table(int row,int column):numRow(row),numColumn(column) {
    cells=new Cell[row*column];
    for(int i=0;i<row*column;i++)
        cells[i]=Cell();
}