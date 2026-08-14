#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {

    int siz = nums.size();

    vector<int> neg;
    vector<int> pos;

    // Separate negative and positive numbers
    for (int k = 0; k < siz; k++) {
        if (nums[k] < 0)
            neg.push_back(nums[k]);
        else
            pos.push_back(nums[k]);
    }

    // No negative numbers
    if (neg.size() == 0) {
        for (int k = 0; k < pos.size(); k++) {
            pos[k] = pos[k] * pos[k];
        }

        return pos;
    }

    // No positive numbers
    if (pos.size() == 0) {
        for (int k = 0; k < neg.size(); k++) {
            neg[k] = neg[k] * neg[k];
        }

        reverse(neg.begin(), neg.end());

        return neg;
    }

    int i = 0;
    int j = 0;
    int idx = 0;

    int n = neg.size();
    int m = pos.size();

    vector<int> res(n + m);

    // Square negative numbers
    for (int k = 0; k < n; k++) {
        neg[k] = neg[k] * neg[k];
    }

    // Reverse negative squares
    reverse(neg.begin(), neg.end());

    // Square positive numbers
    for (int k = 0; k < m; k++) {
        pos[k] = pos[k] * pos[k];
    }

    // Merge
    while (i < n && j < m) {

        if (neg[i] <= pos[j]) {
            res[idx] = neg[i];
            i++;
        }
        else {
            res[idx] = pos[j];
            j++;
        }

        idx++;
    }

    // Remaining negative elements
    while (i < n) {
        res[idx] = neg[i];
        i++;
        idx++;
    }

    // Remaining positive elements
    while (j < m) {
        res[idx] = pos[j];
        j++;
        idx++;
    }

    return res;
}

int main() {

    vector<int> nums = {-7, -3, 2, 3, 11};

    vector<int> ans = sortedSquares(nums);

    cout << "Sorted squares: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}