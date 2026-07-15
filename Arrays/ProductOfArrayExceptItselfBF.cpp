#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i = 0; i<n; i++){
        int prod = 1;
        for(int j = 0; j<n; j++){
            if( i != j){
            prod *= nums[j];
        }
    }
   ans[i] = prod;
}
cout << "Product array : ";
for (int x : ans) {
    cout << x << " ";
}
cout << endl;
return 0;
}
//time complexity : O(n^2)