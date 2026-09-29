#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int left=0;
        int breakpoint=-1;
        for(int right=nums.size()-2;right>=0;right--){
            if(nums[right]<nums[right+1]){
                breakpoint=right;
                break;
            }
        }
        if(breakpoint==-1){
            return reverse(nums.begin(),nums.end());
        }
        for(int right=nums.size()-1;right>=0;right--){
            if(nums[right]>nums[breakpoint]){
               swap(nums[right],nums[breakpoint]);
               break;
            }
        }
        reverse(nums.begin()+breakpoint+1,nums.end());
    }
};