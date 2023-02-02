#include<iostream>
using namespace std;

class dis {
	private :
		int feet,inch;
	public:
		void getdata(){
			cout << "feet";
			cin >> feet ;
			cout << "inch";
			cin >> inch;
		}
		void display(){
		
			cout << "feet : " << feet << endl << "inch : " << inch;
		}
};
int main()
{
	dis d;
	d.getdata();
	d.display();
}
