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
int RemoveDuplicates(vector<int>& nums){
    int n = nums.size();
    if(n == 0) return 0;
    int i = 0;
    for(int j = 1; j<n; j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}
int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    cout<<"Original Array : "<<endl;
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
    int UniqueCount = RemoveDuplicates(nums);
    cout<<"Array after removing Duplicates : "<<endl;
    for(int i = 0; i<UniqueCount; i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\n Total Unique Elements : "<<UniqueCount<<endl;
    return 0;
}