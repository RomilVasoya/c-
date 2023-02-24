#include<iostream>
using namespace std;

class calculate{
	public:
		void sum(int a,int b)
		{
			cout << "Division : " << a/b << endl;
		}
		void sum(int a,int b,int c)
		{
			cout << "subtraction : " << a-b-c << endl;
		}
		void sum(int a,int b,int c,int d)
		{
			cout << "multiplication : " << a*b*c*d << endl;
		}
		void sum(int a,int b,int c,int d,int e)
		{
			cout << "addition : " << a+b+c+d+e << endl;
		}
};

int main(){
	
	calculate c;
	c.sum(1,2);
	c.sum(1,2,3);
	c.sum(1,2,3,4);
	c.sum(1,2,3,4,5);

}
