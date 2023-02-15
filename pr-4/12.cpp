#include<iostream>
using namespace std;

class student{
	private:
		int id;
		string name,address,email,contact;
		
	public:
		void setdata(){
			cout << "enter id : ";
			cin >> id;
			cout << "enter name : ";
			cin >> name;
			cout << "enter address : ";
			cin >> address;
			cout << "enter email : ";
			cin >> email;
			cout << "enter contact : ";
			cin >> contact;
		}
		void getdata(){
			cout << "id :" << id << endl;
			cout << "name :" << name << endl;
			cout << "address :" << address << endl;
			cout << "email :" << email << endl;
			cout << "contact :" << contact << endl;
		}
};

int main(){
	int i;
	int n;
	cout << "enter value of n: ";
	cin >> n;
	student a[n];
	for(i=0;i<n;i++){
		a[i].setdata();
		a[i].getdata();
	}
}
