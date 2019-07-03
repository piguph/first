#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(int age)
{
	this->age = age;
}

Cat::~Cat()
{
	cout << "~Cat()..." << endl;
}

void Cat:: voice()
{
	cout << "Ğ¡Ã¨¿ŞÁË£¬ß÷ß÷ß÷" << "½ñÄê" << age << "Ëê" << endl;
}
