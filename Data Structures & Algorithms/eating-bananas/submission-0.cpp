#include<algorithm>
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r=*max_element(piles.begin(),piles.end());
        int l=1;
        while(l<r){
            long sum=0;
            int mid=l+(r-l)/2;
            for(auto x:piles){
                sum+=(x+mid-1)/mid;
            }
            if(sum<=h)
            r=mid;
            else
            l=mid+1;
        }
return l;
    }
};
