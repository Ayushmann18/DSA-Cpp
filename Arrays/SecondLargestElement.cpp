#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,7,7,5};
    int n = 6;
    int largest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i]; 
        }
    }
    int secondLargest = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i]; 
        }
    }

    cout<<"Second Largest Number in an array : "<<secondLargest<<endl;
    return 0;
}