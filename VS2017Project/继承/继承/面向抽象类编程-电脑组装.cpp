#include <iostream>
using namespace std;

//--------抽象类--------------
//抽象的CPU类
class CPU
{
public:
	virtual void caculate() = 0;
};

//抽象的Card类
class Card
{
public:
	virtual void display() = 0;
};

//抽象的Memory类
class Memory
{
public:
	virtual void storage() = 0;
};

//通用组装电脑，传进来什么组建就组装什么电脑
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


//------------实现类-----------------
class InterCPU : public CPU
{
public:
	virtual void caculate()
	{
		cout << "Inter的CPU开始计算了" << endl;
	}
};

class InterCard : public Card
{
public:
	virtual void display()
	{
		cout << "Inter的显卡开始显示了" << endl;
	}
};

class InterMem : public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter的内存开始存储了" << endl;
	}
};

class kingstonMen :public Memory
{
public:
	virtual void storage()
	{
		cout << "kingston的内存条开始存储了" << endl;
	}
};

class NvidiaCard : public Card
{
public:
	virtual void display()
	{
		cout << "Nvidia的显卡开始显示了" << endl;
	}
};

int main()
{
	//组装一台Inter电脑需要的组件
	CPU * interCpu = new InterCPU;
	Card * interCard = new InterCard;
	Memory * interMem = new InterMem;

	Computer *computer1 = new Computer(interCpu, interCard, interMem);
	computer1->work();

	//组装另一台电脑
	Card *NiCard = new NvidiaCard;
	Memory * kingstonmen = new kingstonMen;

	Computer *computer2 = new Computer(interCpu, NiCard, kingstonmen);
	computer2->work();
	system("pause");
	return 0;
}