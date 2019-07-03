#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	Cat(int age);
	~Cat();
	virtual void voice() ;
private:
	int age;
};

