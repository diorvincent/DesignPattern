#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

class Prototype2
{
public:
	virtual ~Prototype2() {}
	virtual Prototype2* Clone() const = 0;
protected:
	Prototype2() {}
};

class ConcretePrototype : public Prototype2
{
public:
	ConcretePrototype() {}
	ConcretePrototype(const ConcretePrototype& cp)
	{
		cout << "ConcretePrototype copy....." << endl;
	}
	~ConcretePrototype(){}
	Prototype2* Clone() const 
	{ 
		return new ConcretePrototype(*this); 
	};
};



#endif //_PROTOTYPE_H_