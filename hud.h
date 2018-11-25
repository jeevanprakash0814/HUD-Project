#ifndef HUD_H
#define HUD_H

#include "bargraph.h"
#include "gauge.h"
#include "textlist.h"
#include <list>

using namespace std;

class HUD{

public:
    HUD();
    list<BarGraph> queue1;
    list<Gauge> queue2;
    list<TextList> queue3;

private:



};

#endif // HUD_H
