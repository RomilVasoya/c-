#include<iostream>
using namespace std;

class A{
	private:
		int a;
		public:
			A(int a){
				this->a=a;
			}
			A(){
			}
			A operator++(){
				A temp;
				temp.a= ++a;
				return temp;
			}
			A operator--(){
				A temp;
				temp.a= --a;
				return temp;
}
void get(){
	cout << a << endl;
}
};
int main()
{
	A b(10);
	A c;
	A d;
	
	c = ++b;
	d = --b;
	
	c.get();
	d.get();
	}
