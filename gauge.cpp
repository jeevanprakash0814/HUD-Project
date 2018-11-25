#include "gauge.h"
#include <iostream>

using namespace std;

class Gauge{

    double scaleValues;
    int scaleSize;
    int width;
    int height;

    Gauge(int _x, int _y, int _lowerRange, int _upperRange){
        this->_xPos = _x;
        this->_yPos = _y;
        //this->lowerRange = _lowerRange;
        //this->upperRange = _upperRange;
        //drawGauge();
    }

    void _drawGauge(int value){
        //stuff
    }

    void updateGauge(){
        //stuff
    }

    void Gauge::_drawInitialGauge(int value, int r, int g, int b){

    }


};
