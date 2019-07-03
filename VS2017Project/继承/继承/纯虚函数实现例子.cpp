//#include <iostream>
//#include <string>
//using namespace std;
//
//class bigBrother
//{
//public:
//	//纯虚函数，在派生类中重写
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
//	//纯虚函数重写
//	virtual void fightPeople()
//	{
//		cout << "东方不败使用" << kongfu << "打人" << endl;
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
//		cout << "路飞使用" << kongfu << "打人" << endl;
// 	}
//private:
//	string kongfu;
//};
//
//int main()
//{
//	bigBrother * bb = new Lufei("霸气");//虚函数和纯虚函数都是父类的指针或引用指向子类
//	bb->fightPeople();					//如果再用子类构建对象调用子类函数，虚函数就失去了本来的意义
//	delete bb;
//	bigBrother *bo = new eastNeverLose("葵花宝典");
//	bo->fightPeople();
//	delete bo;
//
//	system("pause");
//	return 0;
//}