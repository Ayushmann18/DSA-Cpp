#include <bits/stdc++.h>
using namespace std;

vector<int> prevGreater(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() <= nums[i]) {
            st.pop();
        }

        if (!st.empty()) {
            res[i] = st.top();
        }

        st.push(nums[i]);
    }

    return res;
}

int main() {
    vector<int> nums = {4, 1, 2, 5, 3};
    vector<int> result = prevGreater(nums);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}