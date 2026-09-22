#include<unordered_set>
#include<algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
 int l=0,r=0,maxl=0;
 unordered_set <char>window;
 while(r<s.size()){
    
    if(window.count(s[r])){
        window.erase(s[l]);
        l++;
    }
    else{
        window.insert(s[r]);
        int count=r-l+1;
        maxl=max(maxl,count);
        r++;
    }    
 }
 return maxl;
}
};
