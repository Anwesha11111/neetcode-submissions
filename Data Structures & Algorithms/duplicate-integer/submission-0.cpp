#include<unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
       unordered_set<int>mag(nums.begin(),nums.end()) ;
       if(nums.size()==mag.size())
       return false;
       else return true;

    }
};