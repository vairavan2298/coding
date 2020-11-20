#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	char s1[20],s2[1];
	cin>>s1>>s2;
	int length = strlen(s1)
	for(int i =0; i< length; i++){
		if(s1[i] == s2[1]){
			s1[i] = '\0';
		}
	}
	for(int j =0;j<length;j++){
			if(s1[i] != NULL){
				cout<<s1[i];
			}
	}

	return 0;
}