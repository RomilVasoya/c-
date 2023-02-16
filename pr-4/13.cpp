#include<iostream>
using namespace std;

class train{
	private :
	int train_number,train_time;
	string train_name,destination,source;
	public :
	void setdata(){
		cout << "enter train number : ";
		cin >> train_number;
		cout << "enter train time : ";
		cin >> train_time;
		cout << "enter train name : ";
		cin >> train_name;
		cout << "enter destination :";
		cin >> destination;
		cout << "enter source :";
		cin >> source;
	}
	void getdata(){
		cout << "train_number : " << train_number << endl;
		cout << "train_time : " << train_time << endl;
		cout << "train_name : " << train_name << endl;
		cout << "destination : " << destination << endl;
		cout << "source : " << source << endl;
	} 
};

int main(){
	train t[3];
	int i,n;
	for(i=0;i<3;i++){
		t[i].setdata();
	}
	cout << "enter n :";
	cin >> n;
	for(i=0;i<3;i++){
		if(n-1==i){
			t[i].getdata();
		}
	}
}

