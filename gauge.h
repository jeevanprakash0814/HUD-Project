#ifndef GAUGE_H
#define GAUGE_H


class Gauge
{

public:
    Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b, bool _showMin = false, bool _showMax = false, int _increment, int _startingValue);
    Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b);
    void drawGauge();
    void updateGaugeValue(int value);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    int getIncrement();
    void setIncrement(int increment);
    int getGaugeValue();
    void updateBackground(int r, int g, int b);
    void setBackgroundColor(int r, int g, int b);
    void setTickerColor(int r, int g, int b);
    //putText puts stuff on the image


private:
    int _xPos;
    int _yPos;
    double _increment;
    int _pxWidth;
    int _pxHeight;
    int _value;

    void _drawInitialGauge(int value, int r, int g, int b);
    void _drawTicker(int value, int r, int g, int b);
    void _updateBackground(int r, int g, int b);//will use current value for redrawing ticker

};

#endif // GAUGE_H
