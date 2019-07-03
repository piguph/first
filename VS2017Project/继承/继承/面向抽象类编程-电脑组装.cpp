#include <iostream>
using namespace std;

//--------������--------------
//�����CPU��
class CPU
{
public:
	virtual void caculate() = 0;
};

//�����Card��
class Card
{
public:
	virtual void display() = 0;
};

//�����Memory��
class Memory
{
public:
	virtual void storage() = 0;
};

//ͨ����װ���ԣ�������ʲô�齨����װʲô����
class Computer
{
public:
	Computer(CPU * cpu, Card * card, Memory* mem)
	{
		this->cpu = cpu;
		this->card = card;
		this->mem = mem;
	}

	void work()
	{
		this->cpu->caculate();
		this->card->display();
		this->mem->storage();
	}
private:
	CPU * cpu;
	Card * card;
	Memory* mem;
};


//------------ʵ����-----------------
class InterCPU : public CPU
{
public:
	virtual void caculate()
	{
		cout << "Inter��CPU��ʼ������" << endl;
	}
};

class InterCard : public Card
{
public:
	virtual void display()
	{
		cout << "Inter���Կ���ʼ��ʾ��" << endl;
	}
};

class InterMem : public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter���ڴ濪ʼ�洢��" << endl;
	}
};

class kingstonMen :public Memory
{
public:
	virtual void storage()
	{
		cout << "kingston���ڴ�����ʼ�洢��" << endl;
	}
};

class NvidiaCard : public Card
{
public:
	virtual void display()
	{
		cout << "Nvidia���Կ���ʼ��ʾ��" << endl;
	}
};

int main()
{
	//��װһ̨Inter������Ҫ�����
	CPU * interCpu = new InterCPU;
	Card * interCard = new InterCard;
	Memory * interMem = new InterMem;

	Computer *computer1 = new Computer(interCpu, interCard, interMem);
	computer1->work();

	//��װ��һ̨����
	Card *NiCard = new NvidiaCard;
	Memory * kingstonmen = new kingstonMen;

	Computer *computer2 = new Computer(interCpu, NiCard, kingstonmen);
	computer2->work();
	system("pause");
	return 0;
}