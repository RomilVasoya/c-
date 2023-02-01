#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int a[1000];
	
	int i,j=0,k=2020;
	
	for(i=k;i<=3030;i++){
		if(i%4==0){
			a[j]=i;
		cout << "a["<< j << "] : " << a[j] << "\n";
			j++;
	
		}
	}
}
