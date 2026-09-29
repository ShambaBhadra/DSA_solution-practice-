#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int read=0;
        int write=0;
        while(read<chars.size()){
            int i=chars[read];
            int count=0;
            while(read<chars.size() && i==chars[read]){
                count++;
                read++;
            }
            chars[write]=i;
            write++;
            if(count>1){
                string s=to_string(count);
                for(char c:s){
                chars[write]=c;
                write++;
            }
            }
            
        }
        return write;

    }
};