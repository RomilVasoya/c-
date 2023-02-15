#include<iostream>
using namespace std;

class student{
	private:
		int id;
	public:
		student(int id){
			this->id=id;
		cout << "  id : " << id;
	}
	
	void getdata(){
		cout << "id : " << id << endl;
	}
};

int main(){
	student s(100);
	student s1 = s;
	s1.getdata();
}
