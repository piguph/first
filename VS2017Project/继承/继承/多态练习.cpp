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
////ȫ�ֶ���һ���򶷺���
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
//		cout << "Ӣ�۴�Ӯ�˹���" << endl;
//	}
//	else
//	{
//		cout << "���޴�Ӯ��Ӣ��" << endl;
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
//	hero = &sh;				//�����ָ��ָ������Ķ��� 
//	fight(hero, &m);
//	hero = &h;
//	fight(hero, &m);
//	system("pause");
//	return 0;
//}