#include<iostream>
using namespace std;

class A{
	protected:
	int a;
	public:
		A(){
			cout << "enter a :";
			cin >> a;
		}
};

class square : public A{
	public:
		void getsquare(){
			cout << "a :" << a*a;
		}
};
class cube : public A{
	public:
		void getcube(){
			cout << "a: " << a*a*a;
		}
};
int main(){
	square s;
	s.getsquare();
	cout << endl;
	cube c;
	c.getcube();
}
