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
	 cout <<"С����� ������"  << "����"<< age << "��" << endl;
}
