#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements of the array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for(int i = 0; i<n; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int j = i+1, k = n-1;
        while(j < k){
            int sum = (nums[i] + nums[j] + nums[k]);
            if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                ans.push_back({nums[i], nums[j], nums[k]});
                j++; k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    for(auto triplet : ans){
        for(int x : triplet){
            cout<<x<<" ";
        }
    }
    return 0;
}
//time complexity : O(n)
//time complexity : O(1)