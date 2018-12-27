#include <iostream>
#include <algorithm>
#include <list>

class ObserverInterface{ //abstract observer
public:
	virtual void update() = 0;
	virtual void show() = 0;
};

class WeatherDataInterface{ //abstract subject 
public:
	virtual void registerOb(ObserverInterface* ob) = 0;
	virtual void removeOb(ObserverInterface* ob) = 0;
	virtual void notifyOb() = 0;
};

class ParaWeatherData: public WeatherDataInterface{
public:
    ParaWeatherData() { };
    ~ParaWeatherData() { };
    virtual void registerOb(ObserverInterface* ob){
        observers.push_back(ob);
    }
    virtual void removeOb(ObserverInterface* ob){
        std::list<ObserverInterface*>::iterator pos;
        pos = std::find(observers.begin(), observers.end(), ob);
        if(pos!=observers.end())
            observers.erase(pos);
    }
    virtual void notifyOb(){
        std::list<ObserverInterface*>::iterator it;
        for(it=observers.begin(); it!=observers.end(); it++)
            (*it)->update(); 
    }
    void sensorDataChange(double data){
        sensorData = data;
        notifyOb();
    }
    double getSensorData(){
        return sensorData;
    }
protected:
    std::list<ObserverInterface*> observers;
    double sensorData;

};

class ConcreteObserverCurrent: public ObserverInterface{
public:
    ConcreteObserverCurrent(ParaWeatherData& p){
        pdata = &p;
        pdata->registerOb(this);
    }
    ~ConcreteObserverCurrent(){
        //delete pdata;
    }
    virtual void update(){
        if(currentData != pdata->getSensorData())
            currentData = pdata->getSensorData();
        show();
    }
    virtual void show(){
        std::cout << "_____CurrentConditions_________\n";
        std::cout << "temperature: " << currentData << std::endl;
        std::cout << "_______________________________\n";
    }
protected: 
    double currentData;
    ParaWeatherData* pdata;
};

class ConcreteObserverStatistics: public ObserverInterface{
public:
    ConcreteObserverStatistics(ParaWeatherData& p){
        pdata = &p;
        pdata->registerOb(this);
        //p.print();
    }
    virtual void update(){
        if(pdata->getSensorData() > highestData)
            highestData = pdata->getSensorData();        
        show();
    }
    virtual void show(){
        std::cout << "_____TemperatureStatistics______\n";
        std::cout << "highest temperature: " << highestData << std::endl;
        std::cout << "_______________________________\n\n\n";
    }
protected: 
    double highestData;
    ParaWeatherData* pdata;
};



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
