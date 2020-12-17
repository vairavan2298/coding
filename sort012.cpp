#include <iostream>
using namespace std;

void swap(int *a,int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int arr[],int n){
    int low_index = 0;
    int mid_index = 0;
    int high_index = n-1;
    
    while(mid_index <= high_index){
        switch(arr[mid_index]){
            case 0:
                swap(&arr[low_index],&arr[mid_index]);
                low_index++,mid_index++;
                break;
            case 1:
                mid_index++;
                break;
            case 2:
                swap(&arr[high_index],&arr[mid_index]);
                high_index--;
                break;
                
        }
    }
}

void sortbyBrutForceIdea(int arr[], int n)
{
    // coode here 
      int c1 =0,c0 = 0,c2 =0;
    for(int i = 0;i<n;i++){
      
        if(arr[i] == 0){
            c0++;
        }
        else if(arr[i] == 1)
            c1++;
        else
            c2++;
        
    }
    
    for( int j =0;j<c0;j++){
        arr[j] = 0;
        
    }
    
     for( int j =c0;j<c0+c1;j++){
        arr[j] = 1;
        
    }
    
    for( int j =c1+c0;j<c1+c0+c2;j++){
        arr[j] = 2;
        
    }
}

int main() {
    // your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    //sortbyBrutForceIdea(arr,n);
    for(int j =0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}