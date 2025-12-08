enum class CellValue{
    EMPTY,
    ZERO,
    CROSS
};

enum class CellId{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE
};

class Cell{
public:
    bool change(CellValue newValue){
        if (newValue != CellValue::EMPTY){
            return false;
        }
        value = newValue;
        return true;
    }



private:
    CellValue value;
    CellId id;

    Cell(CellId _id){
        id = _id;
        value = CellValue::EMPTY;
    }
};