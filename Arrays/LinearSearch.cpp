#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
    for(int i = 0; i<n; i++){
        if(arr[i] == target ){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    int target = 8;
    cout<<linearSearch(arr, sz, target)<<endl;
    return 0;
}
//time complexity = O(n)