//#include <iostream>
//#include <string>
//using namespace std;
//
//class Yuebuqun
//{
//public:
//	Yuebuqun(string kongfu)
//	{
//		this-> kongfu = kongfu;
//	}
//
//	string Getkongfu()
//	{
//		return kongfu;
//	}
//
//	virtual void fight()		//多态条件之一，使用虚函数
//	{
//		cout << "岳不群使用了" << kongfu << "打人" << endl;
//	}
//private:
//	string kongfu;
//};
//
//class Linpingzhi : public Yuebuqun
//{
//public:
//	Linpingzhi(string kongfu) : Yuebuqun(kongfu)
//	{
//		
//	}
//
//	void fight()
//	{
//		cout << "林平之使用了" << Getkongfu() << "打人" << endl;
//	}
//};
//
//void FightPeople(Yuebuqun *hero)	//参数一定是父类，父类的指针指向子类的对象
//{									//普通成员对象用父类的引用
//	cout << "调用了打人方法" << endl;
//	hero->fight();
//}
//
//int main()
//{
//	Yuebuqun *Y = new Yuebuqun("僻邪剑谱");
//	//Y->fight();
//
//	Linpingzhi * L = new Linpingzhi("葵花宝典");
//	//L->fight();
//
//	FightPeople(Y);
//	FightPeople(L);
//
//	delete Y;
//	delete L;
//
//	system("pause");
//	return 0;
//}