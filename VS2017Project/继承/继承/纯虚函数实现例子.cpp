//#include <iostream>
//#include <string>
//using namespace std;
//
//class bigBrother
//{
//public:
//	//���麯����������������д
//	virtual void fightPeople() = 0;
//};
//
//class eastNeverLose : public bigBrother
//{
//public:
//	eastNeverLose(string kongfu)
//	{
//		this->kongfu = kongfu;
//	}
//
//	//���麯����д
//	virtual void fightPeople()
//	{
//		cout << "��������ʹ��" << kongfu << "����" << endl;
//	}
//
//private:
//	string kongfu;
//};
//
//class Lufei : public bigBrother
//{
//public:
//	Lufei(string kongfu)
//	{
//		this->kongfu = kongfu;
//	}
//
//	virtual void fightPeople()
//	{
//		cout << "·��ʹ��" << kongfu << "����" << endl;
// 	}
//private:
//	string kongfu;
//};
//
//int main()
//{
//	bigBrother * bb = new Lufei("����");//�麯���ʹ��麯�����Ǹ����ָ�������ָ������
//	bb->fightPeople();					//����������๹������������ຯ�����麯����ʧȥ�˱���������
//	delete bb;
//	bigBrother *bo = new eastNeverLose("��������");
//	bo->fightPeople();
//	delete bo;
//
//	system("pause");
//	return 0;
//}