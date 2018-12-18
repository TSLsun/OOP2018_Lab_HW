#include <iostream>

class People{
public:
	// talk() can be overrided starting in People virtual void talk(){
	virtual void talk(){ std::cout<<"People talking.\n"; }
    virtual void think(){ std::cout<<"People thinking.\n"; }
};

class SmartPeople : public People{
public:
	void talk(){ std::cout<<"SmartPeople talking.\n"; }
	// think() can be overrided starting in SmartPeople virtual void think(){
	void think(){ std::cout<<"SmartPeople thinking.\n"; }
};

class VerySmartPeople : public SmartPeople{ 
public:
	void talk(){ std::cout<<"VerySmartPeople talking.\n"; }
	void think(){ std::cout<<"VerySmartPeople thinking.\n"; }
};

int main(){
	People* p1 = new People();
	People* p2 = new SmartPeople();
	SmartPeople* p3 = new SmartPeople();
	People* p4 = new VerySmartPeople();
	SmartPeople* p5 = new VerySmartPeople();

	p1->talk();
	p1->think();

	p2->talk();
	p2->think();

	p3->talk();
	p3->think();

	p4->talk();
	p4->think();

	p5->talk();
	p5->think();

	delete p1;
	delete p2;
	delete p3;
	delete p4;
	delete p5;

	return 0;
}
