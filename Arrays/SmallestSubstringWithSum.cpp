#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int j = 0;
    int sum = 0;
    int minLen = INT_MAX;

    while (j < n) {
        // Add current element
        sum += nums[j];
        // Shrink window while sum >= target
        while (sum >= target) {
            minLen = min(minLen, j - i + 1);
            // Remove left element
            sum -= nums[i];
            i++;
        }
        j++;
    }
    if (minLen == INT_MAX)
        return 0;
    return minLen;
}
int main() {
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    cout << "Minimum subarray length: "
         << minSubArrayLen(target, nums);
    return 0;
}
//TC : O(n)
//SC : O(1)