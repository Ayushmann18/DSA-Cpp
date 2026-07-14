#include<bits/stdc++.h>
using namespace std;//counting method
int main(){
    int n; 
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int zero = 0, one = 0, two = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            zero++;
        }
        else if(arr[i] == 1){
            one++;
        }
        else{
            two++;
        }
    }
    int index = 0;
    while(zero--){
        arr[index++] = 0;
    } 
    while(one--){
        arr[index++] = 1;
    } 
    while(two--){
        arr[index++] = 2;
    } 
    for(int i = 0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}
//time complexity : O(n)
//space complexity : O(1)