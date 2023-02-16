#include<iostream>
using namespace std;

class first{
	private :
		int id;
		string name;
		
	public :
		void setdata(){
			cout << "enter your id : ";
			cin >> id;
			cout << "enter your name : ";
			cin >> name;
		}
		void getdata(){
			cout << "id :" << id << endl;
			cout << "name :" << name << endl;
		}
};

class secound{
	private :
		first s[5];
		
	public :
		int i;
		void Setdata(){
			for(i=0;i<5;i++){
				s[i].setdata();
			}
		}
		void Getdata(){
			for(i=0;i<5;i++){
				s[i].getdata();
			}
		}		
};
int main(){
	secound s;
	s.Setdata();
	s.Getdata();
}
