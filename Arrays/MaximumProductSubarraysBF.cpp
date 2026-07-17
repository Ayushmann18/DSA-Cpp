#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = arr[0];
    for(int i = 0; i<n; i++){
        int product = 1;
        for(int j = i; j<n; j++){
            product *= arr[j];
            ans = max(ans, product);
        }
    }
    cout<<ans;
    return 0;
}
//time complexity : O(n^2)
//space complexity : O(1)