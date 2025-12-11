#include<vector>
#include"cell.hpp"

class Table{
public:
    Cell getCell(CellId id){
        return cells[static_cast<int>(id)];
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