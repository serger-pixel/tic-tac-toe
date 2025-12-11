#include"table.hpp"
#include <iostream>


class Interface{
    void showRow(std::vector<Cell> row) {
    const int cntCells = 3;
    for (int i = 0; i< cntCells; i++){
        std::cout << "+---+";
    }
    std::cout << "| ";
    
    for (auto cell: row){
        switch (cell.getValue()) {
        case CellValue::EMPTY:
            std::cout << " ";
            break;
        case CellValue::CROSS:
            std::cout << "X";
            break;
        case CellValue::ZERO:
            std::cout << "O";
            break;
        default:
            return;
        }
    }
    
    std::cout << " |" << std::endl;
    for (int i = 0; i< cntCells; i++){
        std::cout << "+---+";
    }
    }


    void showTable(Table field){
        for ()
    }
}