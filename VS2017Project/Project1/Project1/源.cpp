#include <iostream>
#include <iomanip>
using namespace std;

class ONE
{
private:
	int c;
public:
	ONE() : c(0)
	{
		cout << 1 << endl;
	}
	ONE(int m) : c(m)
	{
		cout << 2 << endl;
	}
};

class TWO
{
private:
	ONE one1;
	ONE one2;
public:
	TWO(int n)  : one2(n)
	{
		cout << 3 << endl;
	}
};

int main()
{
	//TWO two(5);
	//ONE one2(2);
	cout << setfill('*') << 123 << setw(9) << 321 << endl;
	cout << setfill('*') << setw(6) << left << 123 << setw(6) << right << 321 << endl;
	cout << "Hello World" << endl;
	system("pause");
	return 0;
}