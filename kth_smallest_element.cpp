#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int findSmall(int a[],int n,int k){
    for(int i=0;i<n;i++){
        for (i = 0; i < n-1; i++)       
        // Last i elements are already in place    
        for (int j = 0; j < n-i-1; j++)  
           if (a[j] > a[j+1]) 
              swap(&a[j], &a[j+1]); 
    }
    return a[k-1];
}
int main() {
	//code
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    int s=findSmall(a,n,k);
	    cout<<s<<endl;
	}
	return 0;
}
