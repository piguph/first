//#include <iostream>
//using namespace std;
//
////��ͼ�����
//class Shape
//{
//public:								//�д��麯������г����࣬�����಻�ܴ���ʵ������
//	virtual double getArea() = 0;	//���麯��,û�к���ʵ�֣���������������д
//	virtual void show()
//	{
//		cout << "Shape..." << endl;
//	}
//
//	void funR()
//	{
//		cout << "funR()..." << endl;
//	}
//};
//
////��д�麯�������������
////һ����ͨ�࣬����̳����д��麯�����࣬ Ҫ�ǲ���д���麯����������Ȼ�ǳ����࣬��Ȼ����ʵ����
//class Rect : public Shape
//{			
//public:
//	Rect(int a)
//	{
//		this->a = a;
//	}
//
//	
//	virtual double getArea()
//	{
//		return a * a;
//	}
//
//private:
//	int a;
//};
//
////��д�麯����Բ�����
//class Circle : public Shape
//{
//public:
//	Circle()
//	{
//
//	}
//	Circle(int r)
//	{
//		this->r = r;
//	}
//
//	void fun()
//	{
//		cout << "fun()..." << endl;
//	}
//
//	virtual double getArea()
//	{
//		return 3.14*r*r;
//	}
//
//	virtual void show()
//	{
//		cout << "Circle(int)..." << endl;
//	}
//private:
//	int r;
//};
//
//int main()
//{
//	
//	Shape *s = new Rect(10);
//	cout << s->getArea() << endl;
//
//	Shape *s1 = new Circle(6);
//	cout << s1->getArea() << endl;
//
//	s1->funR();
//	//s1->fun();
//	Circle r;
//	r.show();
//	r.fun();
//	//s1->show();
//	system("pause");
//	return 0;
//}