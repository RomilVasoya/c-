#include<iostream>
using namespace std;

class state{
	public :
		static int totalstate;
		static void statename();
};

int state :: totalstate=28;

void state :: statename(){
	string statename[]={"Andhra Pradesh", "Arunachal Pradesh", "Assam", "Bihar", "Chhattisgarh", "Goa", "Gujarat", "Haryana", "Himachal Pradesh", "Jharkhand", "Karnataka", "Kerala", "Madhya Pradesh", "Maharashtra", "Manipur", "Meghalaya", "Mizoram", "Nagaland", "Odisha", "Punjab", "Rajasthan", "Sikkim", "Tamil Nadu", "Telangana", "Tripura", "Uttar Pradesh", "Uttarakhand", "West Bengal"};
	
	cout << "total state : " << totalstate << endl;
		for(int i=0;i<totalstate;i++){
			cout << "* " << statename[i] << endl;
		}
	};
int main(){
	state :: statename();
}
