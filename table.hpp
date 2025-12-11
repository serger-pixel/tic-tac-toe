#include<vector>
#include"cell.hpp"
enum class numbRow{
    FIRST,
    SECOND,
    THIRD
};


class Table{
public:
    Cell getCell(CellId id){
        return cells[static_cast<int>(id)];
    }

    std::vector<Cell> getRow(numbRow row){
        std::vector<Cell> row = std::vector<Cell>();
        
        switch (row)
        {
        case constant expression:
            /* code */
            break;
        
        default:
            break;
        }
    }

    Table(){
        cells = std::vector<Cell>();
        for (CellId id = CellId::ONE; id <= CellId::NINE; ++id){
            cells.push_back(Cell(id));
        }
    }   

private:
    std::vector<Cell> cells;
};