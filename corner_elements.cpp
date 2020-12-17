// print corner border elements of a matrix
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n,i,j;
	cin>>n;
	char arr[n][n];

	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			arr[i][j] = 'a';
			
		}
	}
	
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
		
	}
	
	cout<<endl;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			if(i == 0 || i == n-1  || j == 0 || j == n-1)
				arr[i][j] = 'a';
			else
				arr[i][j] = ' ';
			
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}