#ifndef INTERFACE_H
#define INTERFACE_H

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


#endif
