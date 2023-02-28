#include<iostream>
using namespace std;

class a{
	public:
		void getdata(){
			cout << "welcome" << endl;
		}
};

class b : public a{
	public:
		void getdata(){
			cout << "get out"<< endl;
		}
};
int main(){
	b n;
	n.getdata();
}
