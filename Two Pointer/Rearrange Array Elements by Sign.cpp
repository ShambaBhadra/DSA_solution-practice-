#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int r=0;
        int w=1;
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[r]=nums[i];
                r+=2;
            }
            else{
                res[w]=nums[i];
                w+=2;
            }
        }
        return res;

    }
};