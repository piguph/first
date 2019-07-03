#pragma once
#include "Animal.h"
class Sheep : public Animal
{
public:
	Sheep(int age);
	~Sheep();
	virtual void voice() ; //ÉùÃ÷º¯Êı
private:
	int age;
};

