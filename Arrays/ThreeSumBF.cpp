#include<bits/stdc++.h>
using namespace std;//sum of any three number is zero
int main(){
    int n;
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements of an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    set<vector<int>> ans;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());
                    ans.insert(trip);
                }
            }
        }
    }
    cout<<"Indices are : "<<endl;
    for( auto triplet : ans){
        for(int x : triplet){
            cout<<x<<" ";
        }
    }
    return 0;
}
//Time complexity : O(n^3);
//Space complexity : O(1);