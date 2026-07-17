#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter Size of an array : "<<endl;
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter elements in an array : "<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int longest = 1;
    int count = 1;
    for(int i = 1; i<n; i++){
        if(arr[i] == arr[i-1]){
            continue;
        }
        else if(arr[i] == arr[i-1] + 1){
            count++;
        }
        else{
            longest = max(longest, count);
            count = 1;
        }
    }
    longest = max(longest, count);
    cout<<longest;
    return 0;
}
//time complexity : O(n log n)
//space complexity : O(1)