#include<iostream>
using namespace std;

class animals{
	protected:
		int age;
		string name;
	public:
		
		void setani(){
			cout << "enter age : ";
			cin >> age;
			cout << "enter name : ";
			cin >> name;
		}
};
class zebra : public animals{
	protected:
		string place;
	public:
		void setzebra(){
			cout << "enter place :";
			cin >> place;
		}
		void getzebra(){
			cout << "name :" << name << endl;
			cout << "age :" << age << endl;
			cout << "place :" << place << endl;
		}	
};
class dolphin : public animals{
	protected:
		string colour;
	public:
		void setdolphin(){
			cout << "enter colour :";
			cin >> colour;
		}
		void getdolphin(){
			cout << "name :" << name << endl;
			cout << "age :" << age << endl;
			cout << "colour :" << colour << endl;
		}	
};

int main(){
	zebra z;
	z.setani();
	z.setzebra();
	z.getzebra();
	dolphin d;
	d.setani();
	d.setdolphin();
	d.getdolphin();
	
}
