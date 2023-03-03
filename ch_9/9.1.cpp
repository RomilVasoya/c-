#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int ch;
	cout << "1) enter for divison " << endl;
	cout << "2) enter your age" << endl;
	cout << "3) enter your password" << endl;
	cout << "enter your choise :" << endl;
	cin >> ch;

switch(ch){
	case 1: int a,b;
			cout << "enter a : ";
			cin >> a;
			cout << "enter b : ";
			cin >> b;
			try{
				if(b==0){
					throw b;
				}
				else{
					cout <<"your answer is :" << a/b << endl;
				}
			}
			catch(int c){
				cout << "cannot divided by 0";
			}
			break;
	case 2: int age;
			cout << "enter your age:  ";
			cin >> age;
				try{
				if(age<18){
					throw 18-age;
				}
				else{
					cout <<"you are voter :"  << endl;
				}
			}
			catch(int b){
				cout << "you are not voter";
			}
			break;
	case 3: char psw[20];
			cout << "enter psw : " << endl;
			cin >> psw[20];
			int upr=0;
				try{
					for(int i=0; i<=strlen(psw); i++){
						if(psw[i]>=65 && psw[i]<=90){
								upr ++;
					}
					if(upr>0){
						throw psw;
					}
						
				else{
					cout <<"valid psw :"  << endl;
				}
			}
	}
			catch(string b[]){
				cout << "invalid psw ";
			}
			break;
		
	}
}
