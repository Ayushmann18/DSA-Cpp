#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int prefix = 1;
    int suffix = 1;
    int ans = nums[0];
    for(int i = 0; i<n; i++){
        if(prefix == 0){
            prefix = 1;
        }
        if(suffix == 0){
            suffix = 1;
        }
        prefix *= nums[i];
        suffix *= nums[n - 1 - i];
        ans = max(ans, max(prefix, suffix));
    }
    cout<<ans;
    return 0;
}
