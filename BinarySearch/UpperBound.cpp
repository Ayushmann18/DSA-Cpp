#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int res = -1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) return mid;
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            res = mid;
            high = mid;
        }
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 8, 9, 10, 15};
    int target = 4;
    cout << "Upper bound of " << target << " is at index: " << upperBound(arr, target) << endl;
    return 0;
}