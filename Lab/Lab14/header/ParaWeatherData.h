#ifndef PARAWEATHER_H
#define PARAWEATHER_H

#include "Interface.h"
#include <list>
#include <algorithm>

class ParaWeatherData: public WeatherDataInterface{
public:
    ParaWeatherData() { };
    ~ParaWeatherData() { };
    virtual void registerOb(ObserverInterface* ob);
    virtual void removeOb(ObserverInterface* ob);
    virtual void notifyOb();
    void sensorDataChange(double data);
    double getSensorData();

protected:
    std::list<ObserverInterface*> observers;
    double sensorData;
};


#endif
