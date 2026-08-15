//brute force solution mein do loop use karna hai fir dono elements ko compare karna hai
//aur agar dono same hai to usko print kar dena hai TC : O(n^2) SC : O(1)

//Better solution hai sorting use karke fir adjacent elements ko compare karna hai agar dono same hai to 
//usko print kar dena hai TC : O(nlogn) SC : O(1)
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {

    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Find intersection
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Find entrance of cycle
    slow = nums[0];

    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {

    vector<int> nums = {1, 3, 4, 2, 2};

    cout << findDuplicate(nums);

    return 0;
}
//TC : O(n) SC : O(1)