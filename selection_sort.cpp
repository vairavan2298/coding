#include <iostream>
using namespace std;

void swap (int * a, int * b){
	int temp = *b;
	*b = *a;
	*a = temp;
}

void selectionSort(int arr[],int n){
	int min_index,i,j;
	for(i =0;i<n-1;i++){
		min_index = i;
		for(j =i+1;j<n;j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}
		swap(&arr[min_index],&arr[i]);
	}
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionSort(arr,n);
	cout<<"the sorted array is:\n";
	for(int i=0;i<n;i++){
		cout <<arr[i]<< " ";
	}
	
	return 0;
}