#pragma once
class Animal
{
public:
	Animal();
	virtual ~Animal();	//���漰�����麯��ʱ������������������ó�������

	virtual void voice() = 0;

	
};

void LetanimalCry(Animal * a);