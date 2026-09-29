#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool validPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                if (pallindrome(s,left+1,right)){
                    return true;
                }
                if (pallindrome(s,left,right-1)){
                    return true;
                }
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
private:
bool pallindrome(string &s,int left, int right){
        while(left<right){
            if(s[left]!=s[right]){
                left++;
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

