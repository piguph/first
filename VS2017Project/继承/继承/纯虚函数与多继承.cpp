//#include <iostream>
//using namespace std;
//
//class Interface1
//{
//public:
//	virtual void func1(int a, int b) = 0;
//	virtual void func3(int a) = 0;
//};
//
//class Interface2
//{
//public:
//	virtual void func2(int a) = 0;
//};
//
////������̳ж������ʱ��ÿ��������Ĵ��麯����Ҫ����������д����Ȼ������Ȼ�ǳ����࣬����ʵ��������
//class Face : public Interface1, public Interface2
//{
//public:
//	virtual void func1(int a, int b)
//	{
//		cout << "func1(int, int)" << endl;
//	}
//
//	virtual void func3(int a)
//	{
//		cout << "func3(int)" << endl;
//	}
//	virtual void func2(int a)
//	{
//		cout << "func2(int)" << endl;
//	}
//};
//
//int main()
//{
//	Interface1 *if1 = new Face;
//	if1->func1(10,20);
//	if1->func3(10);
//
//	Interface2 *if2 = new Face;
//	if2->func2(10);
//
//	system("pause");
//	return 0;
//}