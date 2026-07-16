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
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i<n; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        for(int j = i+1; j<n;){
            int p = j+1, q = n-1;
            while(p < q){
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];
                if(sum < 0){
                    p++;
                }
                else if(sum > 0){
                    q--;
                }
                else{
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++; q--;
                    while(p < q && nums[p] == nums[p-1]) p++;
                }
            }
            j++; 
            while(j < n && nums[j] == nums[j-1]) j++;
        }
    }
    for(auto fourSum : ans){
        for(int x : fourSum){
            cout<<x<<" ";
        }
    }

    return 0;
}