#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements of an array : "<<endl;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int k;
    cout<<"Enter the target K : "<<endl;
    cin>>k;
    int count = 0;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += nums[j];
            if(sum == k) count++;
            
        }
    }
    cout<<count;
    return 0;
}
//time complexity : O(n^2)
//space complexity : O(1)