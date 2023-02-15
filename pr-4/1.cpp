#include<iostream>
using namespace std;

class employee{
	private:
		int id,selary;
		string name,role,exprience,address,email,contact;
		
	public:
		void setdata(){
			cout << "enter id : ";
			cin >> id;
			cout << "enter selary : ";
			cin >> selary;
			cout << "enter name : ";
			cin >> name;
			cout << "enter role: ";
			cin >> role;
			cout << "enter exprience : ";
			cin >> exprience;
			cout << "enter address : ";
			cin >> address;
			cout << "enter email : ";
			cin >> email;
			cout << "enter contact : ";
			cin >> contact;
		}
		void getdata(){
			cout << "id :" << id << endl;
			cout << "selary :" << selary << endl;
			cout << "name :" << name << endl;
			cout << "role :" << role << endl;
			cout << "exprience :" << exprience << endl;
			cout << "address :" << address << endl;
			cout << "email :" << email << endl;
			cout << "contact :" << contact << endl;
		}
};

int main(){
	employee e1,e2,e3,e4,e5;
	e1.setdata();
	e1.getdata();
	e2.setdata();
	e2.getdata();
	e3.setdata();
	e3.getdata();
	e4.setdata();
	e4.getdata();
	e5.setdata();
	e5.getdata();
};
