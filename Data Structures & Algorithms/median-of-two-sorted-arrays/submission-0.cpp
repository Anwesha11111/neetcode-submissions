class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        long m=nums1.size();long n=nums2.size();
        vector<int>merge(m+n);
        copy(nums1.begin(), nums1.end(), merge.begin());
        copy(nums2.begin(), nums2.end(), merge.begin() + m);
        sort(merge.begin(), merge.end());
        int  tot=merge.size();
        if(tot%2==0)
            return (merge[tot/2-1]+merge[tot/2])/2.0;
            else
            return merge[tot/2];
        

    }
};
