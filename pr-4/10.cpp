#include<iostream>
using namespace std;

class setvalue{
	private :
		int a,a2;
		
	public :
		setvalue(){
			cout << "good morning..." << endl;
		}
		setvalue(int a,int a2){
				this->a=a;
				this->a2=a2;
			}
		void getdata(){
			cout << "a :" << a << endl;
			cout << "a2 :" << a2 << endl;
		}		
};
int main(){
	setvalue s;
	setvalue s1(100,101);
	s1.getdata();
}
