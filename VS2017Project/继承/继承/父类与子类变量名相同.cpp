//#include <iostream>
//using namespace std;
//
//class Parent
//{
//public:
//	Parent(int a)
//	{
//		this->a = a;
//	}
//
//	int GetA()
//	{
//		return a;
//	}
//private:
//	int a;
//};
//
//class Child : public Parent		//�����������ͬ��a��������ͬһ��a
//{
//public:
//	Child(int c_a, int p_a ) : Parent(p_a)
//	{
//		this->a = c_a;
//	}
//
//	void Print()
//	{
//		cout << "p_a = " << Parent::GetA() << endl;
//		cout << "c_a = " << this->a << endl;
//	}
//private:
//	int a;
//};
//
//int main()
//{
//	Child c(10, 20);
//	c.Print();
//
//	system("pause");
//	return 0;
//}