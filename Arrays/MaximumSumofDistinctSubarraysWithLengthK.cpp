#include <bits/stdc++.h>
using namespace std;

long long maximumSubarraySum(vector<int>& nums, int k) {

    int left = 0;
    long long sum = 0;
    long long maxSum = 0;

    unordered_map<int, int> freq;

    for (int right = 0; right < nums.size(); right++) {

        // Add current element
        sum += nums[right];
        freq[nums[right]]++;

        // Keep window size exactly k
        if (right - left + 1 > k) {

            freq[nums[left]]--;
            sum -= nums[left];

            if (freq[nums[left]] == 0) {
                freq.erase(nums[left]);
            }

            left++;
        }

        // Window has size k and all elements are distinct
        if (right - left + 1 == k && freq.size() == k) {
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

int main() {

    vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;

    cout << "Maximum sum: "
         << maximumSubarraySum(nums, k);

    return 0;
}