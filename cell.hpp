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

CellId& operator++(CellId& id) {
    id = static_cast<CellId>(static_cast<int>(id) + 1);
    return id;
}

class Cell{
public:
    bool change(CellValue newValue){
        if (newValue != CellValue::EMPTY){
            return false;
        }
        value = newValue;
        return true;
    }

    CellValue getValue(){
        return value;
    }



private:
    CellValue value;
    CellId id;

    Cell(CellId _id){
        id = _id;
        value = CellValue::EMPTY;
    }
};