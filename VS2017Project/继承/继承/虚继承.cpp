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
//		cout << "���Ǵ�" << endl;
//		m = 100;
//	}*/
//	void sleep()
//	{
//		cout << "�ڴ���˯��" << endl;
//	}
//};
//
//class Sofa : virtual public Furniture  //��̳�
//{
//public:
//	/*Sofa() : Furniture(20)
//	{
//		cout << "����ɳ��" << endl;
//		m = 200;
//	}*/
//
//	void sit()
//	{
//		cout << "��ɳ������Ϣ" << endl;
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
//	cout << sb.m << endl;	//��������̳У�m��ֵ�����Ǽ̳�Sofa�Ļ���Bed�Ĳ����
//							//�Ե���������ʹ����̳У����������mֱ����үү��m,�����m�Ĳ���ȷ��
//	system("pause");
//	return 0;
//}