#include <iostream>
using namespace std;

void swap(int *a , int *b){
	int temp = *b;
	*b = *a;
	*a = temp;
}
void bubbleSort(int arr[],int n){
	for(int i = 0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j] >arr[j+1])
				swap (&arr[j],&arr[j+1]);
		}
	}
}
int main() {
	// Bubble sort
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	bubbleSort(arr , n);
	cout<<"the sorted array usig bubble sort is:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<< "  ";
	}
	return 0;
}