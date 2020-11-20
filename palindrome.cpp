#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	char s1[20];
	cin>>s1;
	int l = strlen(s1);
	int i=0,flag=0;
	for(i=0;i<l;i++){
		if(s1[i] != s1[l-i-1]){
			flag =1;
			break;
		}
	}
	if(flag){
		cout<<"false";
	}
	else{
		cout<<"true";
	}
 
	return 0;
}