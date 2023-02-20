#include<iostream>
using namespace std;

class RBI{
	protected:
		double rate;
	public:
		void getrol(){
			cout << "intrest :" << rate << "% " << endl;
		}	
};

class SBI : public RBI{
	public :
		void SBIset(){
			cout << "enter SBI rate :";
			cin >> rate;
		}
};
class BOB : public RBI{
	public :
		void BOBset(){
			cout << "enter BOB rate :";
			cin >> rate;
		}
	};
class ICICI : public RBI{
	public :
		void ICICIset(){
			cout << "enter ICICI rate :";
			cin >> rate;
		}				
};

int main(){
	SBI s;
	BOB b;
	ICICI i;
	
	s.SBIset();
	b.BOBset();
	i.ICICIset();
	s.getrol();
	b.getrol();
	i.getrol();
	
}

