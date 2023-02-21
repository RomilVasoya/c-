#include<iostream>
using namespace std;

class mother{
	public :
		void display(){
			cout << "mom says : good morning " << endl;
		}
};

class daughter : public mother{
	public :
		void display(){
			cout << "daugher says : good night " << endl;
		}
};

int main(){
	daughter d;
	d.daughter::display();
	d.mother::display();
}
