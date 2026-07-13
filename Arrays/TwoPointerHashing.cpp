#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int second = target - arr[i];

        if (mp.find(second) != mp.end())
        {
            cout << "Indices: " << mp[second] << " " << i;
            return 0;
        }
        mp[arr[i]] = i;
    }
    cout << "No pair found";
    return 0;
}
//time complexity: O(n)
//space complexity: O(n)