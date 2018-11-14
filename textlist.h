#ifndef TEXTLIST_H
#define TEXTLIST_H

class TextList
{

public:
    TextList();
    void drawList();
    void updateMode(int accelerationValue, int manipulatorMode, int gearNumber);

private:
    int _xPos;
    int _yPos;
    int _scaleTextSize;
    int _widthBorder;
    int _heightBorder;
    int _accelerationValue;
    int _manipulatorMode;
    int _gearNumber;

    void _drawText(int _accelerationValue, int _manipulatorMode, int _gearNumber);
    void _drawBorder(int _widthBorder, int _heightBorder);

};


#endif // TEXTLIST_H
