#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<int,int>dict;
        unordered_map<int,int>rict;
        for (auto c : s) dict[c]++;
        for (auto c : t) rict[c]++;
        for(auto c :s){
            if(dict[c]!=rict[c])
            return false;
        }  
        return true;    
    }
};