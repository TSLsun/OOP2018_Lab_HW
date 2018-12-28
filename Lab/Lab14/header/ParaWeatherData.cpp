#include "ParaWeatherData.h"

void ParaWeatherData::registerOb(ObserverInterface* ob)
{
    observers.push_back(ob);
}

void ParaWeatherData::removeOb(ObserverInterface* ob)
{
    std::list<ObserverInterface*>::iterator pos;
    pos = std::find(observers.begin(), observers.end(), ob);
    if(pos!=observers.end())
        observers.erase(pos);
}

void ParaWeatherData::notifyOb()
{
    std::list<ObserverInterface*>::iterator it;
    for(it=observers.begin(); it!=observers.end(); it++)
        (*it)->update(); 
}

void ParaWeatherData::sensorDataChange(double data)
{
    sensorData = data;
    notifyOb();
}

double ParaWeatherData::getSensorData()
{
    return sensorData;
}
