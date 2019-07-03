#include <iostream>
#include "Animal.h"
using namespace std;


Animal::Animal()
{
	
}
Animal::~Animal()	//当涉及到纯虚函数时，基类的析构函数设置成虚析构
{
	cout << "~Animal()..." << endl;
}

void LetanimalCry(Animal * animal)
{
	animal->voice();
}