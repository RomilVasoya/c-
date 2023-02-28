#include<iostream>
using namespace std;

class distanc{
	private:
		int feet;
		int inch;
	public:
	void setfeet(){
		cout << "enter feet : ";
		cin >> feet;
		cout << "enter inch : ";
		cin >> inch;
	}
	distanc operator+(distanc d)
	{
		distanc a;
		a.feet= feet + d.feet;
		a.inch= inch + d.inch;
		while(a.inch >= 12){
			a.inch-=12;
			a.feet++;
		}
		return a;
	}
		void getdata(){
			cout << "feet : " << feet << endl
				 << "inch : " << inch << endl;
		}
			
};
int main(){
	distanc d1,d2,d3;
	d1.setfeet();
	d2.setfeet();
	d3=d2+d1;
	d3.getdata();
}
