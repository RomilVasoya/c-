#include<iostream>
using namespace std;

class time{
	private:
		int h,m,s;
	
	public:
		void setdata(){
			cout << "ENTER HOUR : ";
			cin >> h;
			cout << "ENTER MINITS : ";
			cin >> m;
			cout << "ENTER SECOUND :";
			cin >> s;
		}
		friend void settime(time&,time&);
		
};

void settime(time &t1,time &t2){
	int H,M,S;
	H=t1.h+t2.h;
	M=t1.m+t2.m;
	S=t1.s+t2.s;
	
	while(S>=60){
		S-=60;
		M++;
	}
	while(M>=60){
		M-=60;
		H++;
	}
	cout << " HH:MM:SS " << H << ":"<< M <<":"<< S << endl;
	
}
int main(){
	time t1,t2;
	t1.setdata();
	t2.setdata();
	
	settime(t1,t2);
}
