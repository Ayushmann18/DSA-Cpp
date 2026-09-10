#include <bits/stdc++.h>
using namespace std;
int SubarraySum(vector<int> nums, int k){
    int n = nums.size();
    unordered_map<int, int> m;
    int sum = 0;
    int res = 0;
    m[0] = 1;
    for(int i = 0; i < n; i++){
        sum += nums[i];
        if(m.find(sum - k) != m.end()){
            res += m[sum - k];
        }
        m[sum]++;
    }
    return res;
}
int main() {
    int n =  3;
    vector<int> nums(n);
    nums = {1,1,1};
    int k = 2;
    cout << SubarraySum(nums, k);
    return 0;
}