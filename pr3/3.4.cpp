#include<iostream>
using namespace std;

class datail{
	public :
	int no,l,b,h;
	
	void getdata(){
		cout << "enter number :";
		cin >> no;
		cout << "enter l:";
		cin >> l;
		cout << "enter b:";
		cin >> b;
		cout << "enter h:";
		cin >> h;
	}
	void dis()
	{
		cout << no << endl << l << endl << b << endl << h;
		
	}
};
int main()
{
	datail d;
    d.getdata();
    d.dis();
}
