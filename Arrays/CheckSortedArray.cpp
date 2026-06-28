#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,4,5,8};
    int n = 7;
    bool isSorted = true;
    for(int i = 1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            isSorted = false;
            break;
        }
        
    }
    if(isSorted){
        cout<<"The array is Sorted! "<<endl;
    }
    else{
        cout<<"The array is not Sorted!"<<endl;
    }
    return 0;
}