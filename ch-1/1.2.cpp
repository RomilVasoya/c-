#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char str[10];
	int i;
	cout << "enter your string : " ;
	gets(str);
	
	
	for(i=0;i<strlen(str);i++){
		if(str[i]>=65 && str[i]<=90){
			str[i] += 32;
		}
		else if(str[i]>=97 && str[i]<=122){
			str[i] -= 32;
		}
	}
	
	cout << "your string : " << str ;
	
	
}
