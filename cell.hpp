enum class CellValue{
    EMPTY,
    ZERO,
    CROSS
};

class Cell{
public:
    void draw(){
        return;
    }

    bool change(CellValue newValue){
        if (newValue != CellValue::EMPTY){
            return false;
        }
        value = newValue;
        return true;
    }

private:
    CellValue value;

    Cell(){
        value = CellValue::EMPTY;
    }
};