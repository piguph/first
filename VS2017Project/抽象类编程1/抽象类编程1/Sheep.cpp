#include "Sheep.h"
#include <iostream>
using namespace std;

Sheep::Sheep(int age)
{
	this->age = age;
};

Sheep::~Sheep()
{
	cout << "~Sheep()" << endl;
}

 void Sheep:: voice()
{
	 cout <<"小羊叫了 咩咩咩"  << "今年"<< age << "岁" << endl;
}
