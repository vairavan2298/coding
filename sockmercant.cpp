#include <iostream>
using namespace std;

int main() {

 int n,repeat[101];
    cin>>n;
 
 for(int i = 0; i < n; i++) {//increase the count of  numbers
        int c;
        cin >> c;
        repeat[c]++;
    }

 int count = 0;
 for(int i = 0; i <= 100; i++){ //find the count of numbers that occurs odd number of times
         count += repeat[i] / 2;
     }
 cout << count<< endl;
 return 0;
}
