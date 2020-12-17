#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char s1[50];
	cin>>s1;
	int counter =0;
	int i=0;
	while(s1[i] != 0){
		counter++;
		i++;
	}
	cout<<"the length of the string is:"<<counter;
	
	return 0;
}