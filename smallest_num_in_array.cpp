#include <iostream>
#include <stdio.h>
using namespace std;

int findSmallest(int a[],int n){
	int small=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<small){
			small=a[i];
		}
	}
	return small;
}

int main() {
	// your code goes here
	int s,i,n,t,j;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		s=findSmallest(a, n);
		if(t != 0)
			cout<<s<<"\n";
		else 
			cout<<s;
	}
	return 0;
}
