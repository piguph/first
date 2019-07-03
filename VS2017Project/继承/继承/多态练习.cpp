//#include <iostream>
//using namespace std;
//
//class Hero
//{
//public:
//	Hero()
//	{
//		cout << "Hero()..." << endl;
//	}
//	virtual int getAd()
//	{
//		return 100;
//	}
//};
//
//class Monster : public Hero
//{
//public:
//	Monster()
//	{
//		cout << "Monster()..." << endl;
//	}
//	virtual int getAd()
//	{
//		return 200;
//	}
//};
//
////全局定义一个打斗函数
//
//
//class SuperHero : public Hero
//{
//public:
//	SuperHero()
//	{
//		cout << "SuperHero()..." << endl;
//	}
//	virtual int getAd()
//	{
//		return 1000;
//	}
//};
//
//void fight(Hero * H, Monster * M)
//{
//	if (H->getAd() > M->getAd())
//	{
//		cout << "英雄打赢了怪兽" << endl;
//	}
//	else
//	{
//		cout << "怪兽打赢了英雄" << endl;
//	}
//}
//int main()
//{
//	Hero h;
//	Monster m;
//	SuperHero sh;
//	/*fight(h, m);
//	fight(sh, m);*/
//
//	Hero * hero = NULL;
//	hero = &sh;				//父类的指针指向子类的对象 
//	fight(hero, &m);
//	hero = &h;
//	fight(hero, &m);
//	system("pause");
//	return 0;
//}