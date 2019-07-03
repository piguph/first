//#include <iostream>
//using namespace std;
//
////求图形面积
//class Shape
//{
//public:								//有纯虚函数的类叫抽象类，抽象类不能创建实例对象
//	virtual double getArea() = 0;	//纯虚函数,没有函数实现，必须在子类中重写
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
////重写虚函数求正方形面积
////一个普通类，如果继承了有纯虚函数的类， 要是不重写纯虚函数，此类依然是抽象类，依然不能实例化
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
////重写虚函数求圆形面积
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