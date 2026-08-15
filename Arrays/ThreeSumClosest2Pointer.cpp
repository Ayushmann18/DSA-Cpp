#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {

    sort(nums.begin(), nums.end());

    int n = nums.size();

    int closest = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < n - 2; i++) {

        int left = i + 1;
        int right = n - 1;

        while (left < right) {

            int sum = nums[i] + nums[left] + nums[right];

            // Exact answer found
            if (sum == target) {
                return sum;
            }

            // Update closest answer
            if (abs(sum - target) < abs(closest - target)) {
                closest = sum;
            }

            // Move pointers
            if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return closest;
}

int main() {

    vector<int> nums = {-1, 2, 1, -4};

    int target = 1;

    int ans = threeSumClosest(nums, target);

    cout << "Closest sum: " << ans << endl;

    return 0;
}