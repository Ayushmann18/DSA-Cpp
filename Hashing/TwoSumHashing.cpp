#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> nums, int target){
    int n = nums.size();
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        m[nums[i]]++;
    }
    for(int i = 0; i < n; i++){
        int second = target - nums[i];
        if(m.find(second) != m.end()){
            return {i, m[second]};
        }
        m[nums[i]] = i;
    }
    return {};
}
int main() {
    int n = 5;
    vector<int> nums(n);
    nums = {2,7,11,15,3};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}