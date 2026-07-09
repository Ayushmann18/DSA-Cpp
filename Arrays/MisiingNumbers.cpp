#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements of an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int sum = (n*(n+1)/2);
    int ans = 0;
    for(int i = 0; i<n-1; i++){
        ans += arr[i];
    }
    int MissingNumber =  sum - ans;
    cout<<"Missing Number in an array  : "<<MissingNumber<<endl;
    return 0;

}