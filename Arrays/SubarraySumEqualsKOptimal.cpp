#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int k;
    cout<<"Enter target value k : "<<endl;
    cin>>k;
    vector<int> PrefixSum(n, 0);
    PrefixSum[0] = nums[0];
    int count  = 0;
    for(int i = 1; i<n; i++){
        PrefixSum[i] = PrefixSum[i-1] + nums[i];
    }
    unordered_map<int, int> m;
    for(int j = 0; j<n; j++){
        if(PrefixSum[j] == k) count++;
        int val = PrefixSum[j] - k;
        if(m.find(val) != m.end()){
            count += m[val];
        }
        if(m.find(PrefixSum[j]) == m.end()){
            m[PrefixSum[j]] = 0;
        }
        m[PrefixSum[j]]++;
    }
    cout<<count;
    return 0;
}