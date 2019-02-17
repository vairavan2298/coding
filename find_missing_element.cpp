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

void printArray(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}

int findMissingElement(int a[],int n){
	int* sortedArray=selectionSort(a,n-1);
	//printArray(sortedArray, n-1);
	int sortedArrayIterator = 0;
	for(int i=1;i<=n;i++){
		if(sortedArray[sortedArrayIterator++]!=i){
			return i;
		}
	}
}
int main() {
	// your code goes here
	int i,n,t,j;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(i=0;i<n-1;i++){// gets n-1 element
			cin>>a[i];
		}
		//printArray(a, n+1);
		int missingElement=findMissingElement(a, n);
		cout<<missingElement<<endl;
	}
	return 0;
}

//Time Complexity
// findMissingElement = n * n^2 = O(n^3)
