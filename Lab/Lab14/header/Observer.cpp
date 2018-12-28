#include "Observer.h"

ConcreteObserverCurrent::ConcreteObserverCurrent(ParaWeatherData& p)
{
    pdata = &p;
    pdata->registerOb(this);
}

void ConcreteObserverCurrent::update()
{
    if(currentData != pdata->getSensorData())
        currentData = pdata->getSensorData();
    show();
}

void ConcreteObserverCurrent::show()
{
    std::cout << "_____CurrentConditions_________\n";
    std::cout << "temperature: " << currentData << std::endl;
    std::cout << "_______________________________\n";
}

ConcreteObserverStatistics::ConcreteObserverStatistics(ParaWeatherData& p)
{
    pdata = &p;
    pdata->registerOb(this);
}

void ConcreteObserverStatistics::update()
{
    if(pdata->getSensorData() > highestData)
        highestData = pdata->getSensorData();        
    show();
}

void ConcreteObserverStatistics::show()
{
    std::cout << "_____TemperatureStatistics______\n";
    std::cout << "highest temperature: " << highestData << std::endl;
    std::cout << "_______________________________\n\n\n";
}
