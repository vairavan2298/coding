//Second most repeated sequence in a string
#include <iostream>
#include <string.h>
using namespace std;

int findsecondrepeat(string c1,string c2){
	int n,n1,n2,counter =0;
	n1 = c1.length();
 	n2 = c2.length();
 	if( n1 >n2)
		n = n1;
	else 
		n =n2;
    // declaring character array
    char s1[n1 + 1];
    char s2[n2 + 1];
 
    // copying the contents of the
    // string to char array
    strcpy(s1, c1.c_str());
	 strcpy(s2, c2.c_str());
	for(int i =0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(s1[i] == s2[j]){
				counter++;
				break;
			}	
			
		}
		
	}
	return counter;
	
}

int main() {
	// your code goes here
	string c1;
	string c2;
	cin>>c1>>c2;
	cout<<findsecondrepeat(c1,c2);
	return 0;
}