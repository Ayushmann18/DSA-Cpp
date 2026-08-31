#include <bits/stdc++.h>
using namespace std;
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, -1);
        stack<int> st;
        st.push(nums[n - 1]);
        for(int i = n - 2; i >= 0; i--){
            while(!st.empty() && st.top() >= nums[i]){
                st.pop();
            }
                if(st.empty()){
                    res[i] = -1;
                }
                else{
                    res[i] = st.top();
                }
                st.push(nums[i]);
            }
        return res;
    }
int main() {
    vector<int> nums = {4, 1, 2, 5, 3};
    vector<int> result = nextGreaterElements(nums);     
for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }   
    return 0;
}