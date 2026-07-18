#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int pivot = -1;
    for(int i = n-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(nums.begin(), nums.end());
    }
    else{
        for(int i = n-1; i>pivot; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        reverse(nums.begin() + pivot + 1, nums.end());
    }
    for(int x : nums){
        cout<<x<<" ";
    }
    return 0;
}
//time complexity : O(n)
//space complexity : O(1)