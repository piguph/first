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
//	virtual void fight()		//��̬����֮һ��ʹ���麯��
//	{
//		cout << "����Ⱥʹ����" << kongfu << "����" << endl;
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
//		cout << "��ƽ֮ʹ����" << Getkongfu() << "����" << endl;
//	}
//};
//
//void FightPeople(Yuebuqun *hero)	//����һ���Ǹ��࣬�����ָ��ָ������Ķ���
//{									//��ͨ��Ա�����ø��������
//	cout << "�����˴��˷���" << endl;
//	hero->fight();
//}
//
//int main()
//{
//	Yuebuqun *Y = new Yuebuqun("Ƨа����");
//	//Y->fight();
//
//	Linpingzhi * L = new Linpingzhi("��������");
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