#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements in an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    set<vector<int>> ans;
    for(int i = 0; i<n; i++){
        int target = -nums[i];
        unordered_set<int> s;
        for(int j = i+1; j<n; j++){
            int third = target - nums[j];
            if(s.find(third) != s.end()){
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                ans.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    for(auto triplet : ans){
        for(int x : triplet){
            cout<<x<<" ";
        }
    }
    return 0;
}
//time complexity : O(n^2 log n)
//space complexity : O(n)