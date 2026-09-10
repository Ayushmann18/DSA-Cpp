#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> nums){
    int n = nums.size();
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        m[nums[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(m[nums[i]] > 1){
            return true;
        }
    }
    return false;
}
int main() {
    int n = 10;
    vector<int> nums(n);
    nums = {1,1,1,3,3,4,3,2,4,2};
    if(containsDuplicate(nums)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}