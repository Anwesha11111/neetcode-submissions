class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1,largest=0;
        while(i<j){
            int volume=abs(j-i)*min(heights[j],heights[i]);
            largest=max(largest,volume);
            if(heights[i]<heights[j])
            i++;
            else
            j--;

        }
        return largest;
    }
};
