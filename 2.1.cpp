#include<iostream>
using namespace std;

void input(int a[],int n){
	int i;
	for (i=0;i<n;i++){
		cout << "enter array a[" << i << "]";
		cin >> a[i];
	}
}
int main()
{
	int n,i,b,j;
	cout << "enter value of n:";
	cin >> n;
	
	int a[n];
	
	input (a,n);
	
	for(i=0;i<n;i++){
		b=a[i];
		
		for (j=a[i]-1;j>0;j--){
			b*=j;
		} 
		a[i]=b;
	}
	for(i=0;i<n;i++){
		cout << a[i] << endl;
			}
	}
			
			
			
			
		
		
	 
