#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {

    int left = 0;
    int right = 0;
    int maxLen = 0;

    while (right < nums.size()) {

        if (nums[right] == 0) {
            left = right + 1;
        }

        maxLen = max(maxLen, right - left + 1);

        right++;
    }

    return maxLen;
}

int main() {

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Maximum consecutive ones: "
         << findMaxConsecutiveOnes(nums);

    return 0;
}