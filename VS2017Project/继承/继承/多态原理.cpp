//#include <iostream>
//using namespace std;
//
//class Parent
//{
//public:
//	Parent(int a)	//�麯������Ч�ʵ�
//	{
//		this->a = a;
//	}
//
//	virtual void showP()
//	{
//		cout << "a = " << a << endl;
//	}
//
//	virtual void func(int a)
//	{
//		cout << "Parent: func(int)" << endl;
//	}
//
//	virtual void func(int a, int b)
//	{
//		cout << "Parent: func(int, int)" << endl;
//	}
//
//	void func(int a, int b, int c)	//��������ͨ�������������麯������ֻ���ø������ͨ����������ȥ���麯����
//	{
//		cout << "Parent :func(int, int, int)" << endl;
//	}
//private:
//	int a;
//};
//
//class Child : public Parent
//{
//public:
//	Child(int a, int b) : Parent( a)
//	{
//		this->b = b;
//	}
//
//	virtual void showP()
//	{
//		cout << "b = " << b << endl;
//	}
//
//	virtual void func(int a)
//	{
//		cout << "Child: func(int)" << endl;
//	}
//
//	virtual void func(int a, int b)
//	{
//		cout << "Child: fund(int, int)" << endl;
//	}
//
//	void func(int a, int b, int c)
//	{
//		cout << "Child :func(int, int, int)" << endl;
//	}
//private:
//	int b;
//};
//
//void myfunc(Parent * pp)
//{
//	pp->func(10);
//	pp->func(10, 20);
//	pp->func(100, 200, 300);
//}
//
//int main()
//{
//	Parent *p = new Parent(10);
//	Parent *p1 = new Child(100, 200);
//
//	myfunc(p);
//	p->showP();
//	myfunc(p1);
//	p1->showP();		//��дshowP�������������������showP ����
//
//	system("pause");
//	return 0;
//}