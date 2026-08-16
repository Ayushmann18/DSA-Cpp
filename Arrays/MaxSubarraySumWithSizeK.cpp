#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& nums, int k) {

    int left = 0;
    int right = 0;

    int sum = 0;
    int maxSum = INT_MIN;

    while (right < nums.size()) {

        sum += nums[right];

        // Window size = k
        if (right - left + 1 == k) {

            maxSum = max(maxSum, sum);

            // Remove left element
            sum -= nums[left];
            left++;
        }

        right++;
    }

    return maxSum;
}

int main() {

    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;

    cout << "Maximum subarray sum: "
         << maxSubarraySum(nums, k);

    return 0;
}