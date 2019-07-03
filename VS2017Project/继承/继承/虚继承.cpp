//#include <iostream>
//using namespace std;
//
//class Furniture
//{
//public:
//	Furniture()
//	{
//		m = 10;
//	}
//	int m;
//private:
//
//};
//
//class Bed : virtual public Furniture
//{
//public:
//	/*Bed() : Furniture(10)
//	{
//		cout << "这是床" << endl;
//		m = 100;
//	}*/
//	void sleep()
//	{
//		cout << "在床上睡觉" << endl;
//	}
//};
//
//class Sofa : virtual public Furniture  //虚继承
//{
//public:
//	/*Sofa() : Furniture(20)
//	{
//		cout << "这是沙发" << endl;
//		m = 200;
//	}*/
//
//	void sit()
//	{
//		cout << "在沙发上休息" << endl;
//	}
//};
//
//class SofaBed : public Bed, public Sofa
//{
//public:
//	SofaBed()
//	{
//		sleep();
//		sit();
//	}
//
//	//int m;
//};
//
//int main()
//{
//	SofaBed sb;
//	cout << sb.m << endl;	//若不用虚继承，m的值到底是继承Sofa的还是Bed的不清楚
//							//对的两个父类使用虚继承，让孙子类的m直接用爷爷类m,避免对m的不明确性
//	system("pause");
//	return 0;
//}