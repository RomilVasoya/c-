#include<iostream>
using namespace std;

class a{
	public:
		void print()
		{
			cout << "welcome " << endl;
		}
		void print(int a){
			cout << a  << endl;
		}
			void print(int a,int b){
			cout << a << b  << endl;
		}
			void print(int a,int b,int c){
			cout << a << b << c  << endl;
		}
};
int main(){
	a n;
	n.print();
	n.print(10);
	n.print(10,20);
	n.print(10,20,30);
}
