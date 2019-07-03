#pragma once
class Animal
{
public:
	Animal();
	virtual ~Animal();	//当涉及到纯虚函数时，基类的析构函数设置成虚析构

	virtual void voice() = 0;

	
};

void LetanimalCry(Animal * a);