#include<iostream>
#include<vector>
using namespace std;

int Majorityelement(vector<int>& nums){
    int n = nums.size();
    //sorting approach    
    int freq = 1, ans = nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
            else{
                freq =1;
                ans = nums[i];


            }
            if (freq > n/2){
                return ans;
            }

        
    }

}//brute force approach
/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int val : nums){
           int freq =  0;
            for(int el : nums){
                if(el == val){
                    freq++;
                }
            }
            if(freq > n/2){
                return val;
            }
        }
        return -1;
        
    }
};*/