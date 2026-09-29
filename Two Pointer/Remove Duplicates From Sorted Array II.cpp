#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write=0;
        for(int read=0;read<nums.size();read++){
            int count=1;
            while(read+1<nums.size() && nums[read+1]==nums[read]){
                count++;
                read++;
            }
            for(int i=0;i<min(2,count);i++){
                nums[write]=nums[read];
                write++;
            }
        }
        return write;
    }

};