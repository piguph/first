//#include <iostream>
//#include <ctime>
//using namespace std;
//
//class Parent
//{
//public:
//	Parent()
//	{
//		cout << "Parent()����" << endl;
//		a = 0;
//	}
//
//	Parent(int a)
//	{
//		cout << "Parent(int)����" << endl;
//		this->a = a;
//	}
//
//	void Printp()
//	{
//		cout << "a = " << a << endl;
//	}
//
//	~Parent()
//	{
//		cout << "~Parent()����" << endl;
//	}
//private:
//	int a;
//};
//
//class Child : public Parent
//{
//public:
//	Child(int a, int b) : Parent(a)
//	{
//		cout << "Child(int, int)����" << endl;
//		this->b = b;
//	}
//
//	void PrintC()
//	{
//		cout << "b = " << b << endl;
//	}
//
//	~Child()
//	{
//		cout << "~Child()����" << endl;
//	}
//private:
//	int b;
//};
//
//int main(void)
//{
//	Child *c = new Child(10,20);	
//	c->PrintC();					//Parent(int)���������һ���Ĺ��캯������ִ��������Ĺ���
//	delete c;						//Child(int, int)����
//									//b = 20
//									//~Child()��������������������������������������
//									//~Parent()����
//	/*Child c (10, 20);
//	c.PrintC();*/		//���ʣ�Ϊʲô����ջ�������ܵ�������������
//
//	system("pause");
//	//getchar();
//
//	return 0;
//}