#include<iostream>
using namespace std;

class time {
	public :
		int t,m,s,h;
		public :
		void gettime()
		{
			cout << "enter secound : ";
			cin >> t;
			
		}
		void dis()
		{
			h=t/3600;
			t=t%3600;
			m=t/60;
			t=t%60;
			s=t;
			cout << "hh:mm:ss " << h << ":" << m << ":" << s;
		}
};
int main()
{
	time t;
	t.gettime();
	t.dis();
}
