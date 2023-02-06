#include<iostream>
using namespace std;

class student
{
	private :
		int id,age;
		string name,course,email,city,collage;
		
		public : 
			void getdata()
			{
				cout << "Enter id\t: ";
				cin >> id;
				cout << "Enter name\t: ";
				cin >> name;
				cout << "Enter age\t: ";
				cin >> age;
				cout << "Enter course\t: ";
				cin >> course;
				cout << "Enter email\t: ";
				cin >> email;
				cout << "Enter city\t: ";
				cin >> city;
				cout << "Enter collage\t: ";
				cin >> collage;
		}
		void setdata(){
			cout << "id\t: " << id << endl
				 <<	"name\t: " << name << endl
				 <<	"age\t: " << age<< endl
				 <<	"course\t: " << course << endl
				 <<	"email\t: " << email << endl
				 <<	"city\t: " << city << endl
				 <<	"collage\t: " << collage << endl;
		}
	};
		int main(){
			student s1,s2,s3,s4,s5;
			
			s1.getdata();
			s1.setdata();
			s2.getdata();
			s2.setdata();
			s3.getdata();
			s3.setdata();
			s4.getdata();
			s4.setdata();
			s5.getdata();
			s5.setdata();
		}

