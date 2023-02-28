#include<iostream>
using namespace std;

class message{
	private :
		string msg;
	public :
	message(){
		cout << "enter message";
		cin >> msg;
	}
	void print(){
		cout << msg << endl;
	}
	void print(string n){
		cout << msg << "  " << n << endl;
	}		
		
};
int main(){
	message b;
	b.print();
	b.print("hello");
}
