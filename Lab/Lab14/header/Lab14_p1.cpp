//#include "Interface.h"
#include "ParaWeatherData.h"
#include "Observer.h"

int main(){
	ParaWeatherData* wdata = new ParaWeatherData;
	ConcreteObserverCurrent* current = new ConcreteObserverCurrent(*wdata);
	ConcreteObserverStatistics* statistcs = new ConcreteObserverStatistics(*wdata);

	wdata->sensorDataChange(28.2);
	wdata->sensorDataChange(30.12);
	wdata->sensorDataChange(26);

	wdata->removeOb(current);

	wdata->sensorDataChange(35.9);
	wdata->sensorDataChange(40);  

	delete statistcs;
	delete current;
	delete wdata;

	return 0;
}
