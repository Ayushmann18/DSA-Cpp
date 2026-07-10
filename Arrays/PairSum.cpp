#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<deque>
#include<algorithm>
using namespace std;
vector<int> PairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;
    while(i < j){
        int PairSum = nums[i] + nums[j];
        if(PairSum > target){
            j--;
        }
        else if(PairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main() {
    vector<int> nums = {2,7,11,15};
    int target = 26;
    vector<int> ans = PairSum(nums, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}