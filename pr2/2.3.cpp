#include<iostream>
using namespace std;

inline void table (int);

int main()
{
	int a;
	cout << "enter your number";
	cin >> a;
	table(a);
}

inline void table(int a)
{
	int i;
	for(i=0;i<=10;i++)
	{
		cout << a << "X" << i << "=" << a*i << endl;
	}
}
