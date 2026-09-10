#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> nums){
    int n = nums.size();
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        m[nums[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(m[nums[i]] > n/2){
            return nums[i];
        }
    }
    return -1;
}
int main() {
    int n = 7;
    vector<int> nums(n);
    nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums);
    return 0;
}