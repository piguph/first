#pragma once
#include "Animal.h"
class Sheep : public Animal
{
public:
	Sheep(int age);
	~Sheep();
	virtual void voice() ; //��������
private:
	int age;
};

