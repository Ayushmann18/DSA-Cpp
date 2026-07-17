#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements of an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    vector<int> ans;
    int maxRight = nums[n-1];
    ans.push_back(maxRight);
    for(int i = n-2; i>=0; i--){
        if(nums[i] >= maxRight){
            ans.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    reverse(ans.begin(), ans.end());
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}
//Time complexity : O(n)
//Space complexity : O(n)