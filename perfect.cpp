#include <iostream>
using namespace std;
int perfect(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;

}
int main() {
	// your code goes here
	int n,s;
	cin>>n;
	s=perfect(n);
//	cout<<s<<" is ";
	if(s==n){
		cout<<"perfect number"<<endl;
	}
	else{
		cout<<"not a perfect number"<<endl;
	}
	return 0;
}
