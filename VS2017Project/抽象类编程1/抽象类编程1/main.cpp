#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Sheep.h"
using namespace std;


int main()
{
	/*Animal *ac = new Cat(6);
	ac->voice();
	Animal *as = new Sheep(9);
	as->voice();*/

	Animal *cat = new Cat(6);
	LetanimalCry(cat);
	Animal *sheep = new Sheep(9);
	LetanimalCry(sheep);
	

	delete cat;
	delete sheep;
	system("pause");
	return 0;
}