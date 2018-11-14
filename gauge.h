#ifndef GAUGE_H
#define GAUGE_H


class Gauge
{

public:
    Gauge(int _x, int _y, int _lowerRange, int _upperRange);
    void drawGauge();
    void updateGauge(int value);

private:
    int _xPos;
    int _yPos;
    double _scaleValues;
    int _scaleSize;
    int _width;
    int _height;

    void _drawGauge(int value);

};

#endif // GAUGE_H
