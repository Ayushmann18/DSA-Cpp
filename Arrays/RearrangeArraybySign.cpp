#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an element : "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans(n, 0);
    int PosIndex = 0;
    int NegIndex = 1;
    for(int i = 0; i<n; i++){
        if(arr[i] < 0){
            ans[NegIndex] = arr[i];
            NegIndex += 2;
        }
        else {
            ans[PosIndex] = arr[i];
            PosIndex += 2;
        }
    }
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}
//time complexity : O(n)
//Space Complexity : O(n)