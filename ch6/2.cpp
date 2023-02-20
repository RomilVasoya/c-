#include<iostream>
using namespace std;

class p{
	protected:
		float temp;
	public :
		void setdata(){
			cout << "enter temp :";
			cin >> temp;
		}
};

class q : public p{
	protected:
			float fah;
	public:
		void setData(){
			cout << "fah :" << (temp*9/5)+32 << endl;
		}
};

class r : public q{
	public :
		void kelvin(){
			cout << "kelvin :" << (temp+459.67)*5/9 << endl;
	}
};

int main(){
	r r1;
	r1.setdata();
	r1.setData();
	r1.kelvin();
}
