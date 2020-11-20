#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr1[50]={1,2,3};
	int arr2[50]={4,5,6};
	int arr3[50] = {7,8,9};
	int n =3;
	for( int i=0;i<n;i++){
		cout<<arr1[i];
	}
	cout<<arr2[n-1];

	for( int j=n-1;j>=0;j--){
		cout<<arr3[j];
	}
	
	for( int k=0;k<n-1;k++){
		cout<<arr2[k];
	}
	
	
	return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int arr1[3][3]={1,2,3,4,5,6,7,8,9};

// 	int n =3;
	
// 		for( int j=0;j<n;j++){
// 			cout<<arr1[0][j];
// 		}
// 		cout<<arr1[1][2];
// 		for( int j=n-1;j>=0;j--){
// 			cout<<arr1[2][j];
// 		}
// 		for( int j=0;j<n-1;j++){
// 			cout<<arr1[1][j];
// 		}

// 	return 0;
// }