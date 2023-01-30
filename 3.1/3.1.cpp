#include<iostream>
using namespace std;
class employee
{
	private:
	int id;
	string name;
	int staff;
	int revenue;
	int raw;
	int exportt;
	string ceo;
	public:
		void setdata(){
			cout << "enter id: ";
			cin >> id;
			cout << "enter name: ";
			cin >> name;
			cout << "enter staff: ";
			cin >> staff;
			cout << "enter revenue: ";
			cin >> revenue;
			cout << "enter raw: ";
			cin >> raw;
			cout << "enter exportt: ";
			cin >> exportt;
			cout << "enter ceo: ";
			cin >> ceo;
		}
		void getdata(){
			cout << "id: " << id << endl
			 << "name:" << name << endl
			 << "staff:" << staff << endl
			 << "revenue:" << revenue << endl
			 << "raw:" << raw << endl
			 << "exportt:" << exportt << endl
			 << "ceo:" << ceo << endl;
		}
};
	

int main(){
	employee e1,e2,e3,e4,e5;
	e1.getdata();
	e1.setdata();
	e2.getdata();
	e2.setdata();
	e3.getdata();
	e3.setdata();
	e4.getdata();
	e4.setdata();
	e5.getdata();
	e5.setdata();
}
