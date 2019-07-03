//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student
//{
//public:
//	Student(int id, string name)
//	{
//		this->id = id;
//		this->name = name;
//	}
//
//	void Print()
//	{
//		cout << "id = " << id << ", name = " << this->name << endl;
//	}
//private:
//	int id;
//	string name;
//};
//
//class Student1 : public Student
//{
//public:
//	Student1(int id, string name, double score) : Student(id, name)
//	{
//		this->score = score;
//	}
//	void Print()
//	{
//		Student::Print();
//		cout << "score = " << score << endl;
//	}
//private:
//	double score;
//};
//
//int main()
//{
//	Student1 s1(666, "zhang3", 99.9);
//	s1.Print();
//
//	system("pause");
//	return 0;
//}