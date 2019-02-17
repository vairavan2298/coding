#include <iostream>
using namespace std;

int findSmallestIndex(int a[],int start, int end){
	int small=start;
	for(int i=start;i<end;i++){
		if(a[i]<a[small]){
			small=i;
		}
	}
	return small;
}

int* selectionSort(int a[], int n){
	for(int i=0;i<n;i++){
		int smallIndex=findSmallestIndex(a,i,n);
		int temp=a[smallIndex];
		a[smallIndex]=a[i];
		a[i]=temp;
	}
	return a;
}
int main() {
	// your code goes here
	int i,n,t,j;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int* s=selectionSort(a, n);
		for(i=0;i<n;i++){
			cout<<s[i]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
//Time complexity
//O(n^2)
