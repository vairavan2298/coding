#include <iostream>
#include <string.h>
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

int findMissingElementUsingSorting(int a[],int n){ //  // Time complexity = O(n^3)
	int* sortedArray=selectionSort(a,n-1);
	//printArray(sortedArray, n-1);
	int sortedArrayIterator = 0;
	for(int i=1;i<=n;i++){
		if(sortedArray[sortedArrayIterator++]!=i){
			return i;
		}
	}
}
int findMissingElementUsingFormulae(int a[],int n){ // Time complexity = O(n)
	int total=(n*(n+1))/2, sum=0;
	for(int i=0;i<n-1;i++){
		sum+=a[i];
	}
	return total-sum;
}
int findMissingElementUsingXor(int a[],int n){ // Time complexity = O(n)
	int arrayXor=a[0];
	for(int i=1;i<n-1;i++){
		arrayXor^=a[i];
	}
	int totalXor=1;
	for(int i=2;i<=n;i++){
		totalXor^=i;
	}
	return totalXor^arrayXor;
}



int findMissingElementUsingExtraArray(int a[],int n){ // Time complexity = O(n) + Space complexity = O(n)
	//memset(myarray, 0, sizeof(myarray)); // for automatically-allocated arrays
	int b[n];
	memset(b,-1,sizeof(b));
	for(int i=0;i<n-1;i++){
		int j=a[i];
		b[j-1]=a[i];
	}
	int missingNumber;
	for(int j=0;j<n;j++){
		if(b[j] == -1){
			missingNumber=j+1;
			break;
		}
	}
	return missingNumber;
	
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
		//int missingElement=findMissingElement(a, n);
		// int missingElement = findMissingElementUsingExtraArray(a, n);
		//int missingElement = findMissingElementUsingFormulae(a, n);
		int missingElement = findMissingElementUsingXor(a, n);
		cout<<missingElement<<endl;
	}
	return 0;
}
