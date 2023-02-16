#include<iostream>
using namespace std;

class constant{
	public:
		const int id=101;
	void getdata(){
		cout << "id : " << id;
	}	
};
int main(){
	constant c;
	c.getdata();
}
