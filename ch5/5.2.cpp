#include<iostream>
using namespace std;

class customer
{
	private :
		int id,age;
		string name,telecome,mobile,city,simcard;
		
		public : 
			void getdata()
			{
				cout << "Enter id\t: ";
				cin >> id;
				cout << "Enter name\t: ";
				cin >> name;
				cout << "Enter age\t: ";
				cin >> age;
				cout << "Enter telecome\t: ";
				cin >> telecome;
				cout << "Enter mobile\t: ";
				cin >> mobile;
				cout << "Enter city\t: ";
				cin >> city;
				cout << "Enter simcard\t: ";
				cin >> simcard;
		}
		void setdata(){
			cout << "id\t: " << id << endl
				 <<	"name\t: " << name << endl
				 <<	"age\t: " << age<< endl
				 <<	"course\t: " << telecome << endl
				 <<	"email\t: " << mobile << endl
				 <<	"city\t: " << city << endl
				 <<	"collage\t: " << simcard << endl;
		}
	};
		int main(){
			customer c1,c2,c3,c4,c5;
			
			c1.getdata();
			c1.setdata();
			c2.getdata();
			c2.setdata();
			c3.getdata();
			c3.setdata();
			c4.getdata();
			c4.setdata();
			c5.getdata();
			c5.setdata();
		}

