#include<unordered_set>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {int longest=0;
        unordered_set<int>lookup(nums.begin(),nums.end());
        for(int num:lookup)
        if(!lookup.count(num-1)){
            int x=num;
            int count=1;
            while(lookup.count(x+1))
            {
                count++;
                x++;
               

            }
            longest=max(longest,count);
        }
        return longest;
    }
};
