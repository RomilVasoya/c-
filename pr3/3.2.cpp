#include<iostream>
using namespace std;

class time{
	public:
		int h,m;
	public:
		void gettime(){
			cout << "hour";
			cin >> h ;
			cout << "min";
			cin >> m;
		}
		void display(time t1,time t2)
		{
			int hh,mm;
			hh=t1.h+t2.h;
			mm=t1.m+t2.m;
			while (mm>=60)
			{
				mm-=60;
				hh++;
			}
			cout << "hour : " << hh << endl << "min : " << mm;
		}
};
int main()
{
	time t1,t2,t3;
	t1.gettime();
	t2.gettime();
	t3.display(t1,t2);
}
