#ifndef OBSERVER_H
#define OBSERVER_H

#include "Interface.h"
#include "ParaWeatherData.h"
#include <iostream>

class ConcreteObserverCurrent: public ObserverInterface{
public:
    ConcreteObserverCurrent(ParaWeatherData& p);
    ~ConcreteObserverCurrent(){ }
    virtual void update();
    virtual void show();

protected: 
    double currentData;
    ParaWeatherData* pdata;
};

class ConcreteObserverStatistics: public ObserverInterface{
public:
    ConcreteObserverStatistics(ParaWeatherData& p);
    virtual void update();
    virtual void show();

protected: 
    double highestData;
    ParaWeatherData* pdata;
};



#endif
