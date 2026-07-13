#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter sorted array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target : "<<endl;
    cin>>target;
    int start = 0;
    int end = n-1;
    while(start < end){
        int sum = arr[start] + arr[end];
        if(sum == target){
            cout<<"Pair found : "<<start<<" "<<end<<endl;//returns index number of the pair
            return 0;
        }
        else if(sum < target){
            start++;
        }
        else{
            end--;
        }
    }
    cout<<"No pair found!"<<endl;
    return 0;
}
//time complexity : O(n)
//space complexity : O(1)