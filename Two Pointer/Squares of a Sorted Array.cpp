#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        vector<int>res(nums.size());
        int j=nums.size()-1;
        while(left<=right){
            if(abs(nums[left])<abs(nums[right])){
                int i=nums[right]*nums[right];
                res[j]=i;
                j--;
                right--;
            }
            else{
                int i=nums[left]*nums[left];
                res[j]=i;
                left++;
                j--;
            }
        }
        return res;
    }
};

//Key point:- the largest element come from any end (either first or last) of the array.
//so we start to fill the result array from the largest element as smallest element is unknown initially.