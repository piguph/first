#include <iostream>
#include "Animal.h"
using namespace std;


Animal::Animal()
{
	
}
Animal::~Animal()	//���漰�����麯��ʱ������������������ó�������
{
	cout << "~Animal()..." << endl;
}

void LetanimalCry(Animal * animal)
{
	animal->voice();
}