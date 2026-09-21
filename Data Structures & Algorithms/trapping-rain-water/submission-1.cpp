class Solution {
public:
    int trap(vector<int>& height) {
int n=height.size();
int l=0,r=n-1,maxl=0,maxr=0,total=0;
while(l<r){
    if(height[l]<height[r]){
    if(maxl<=height[l])
    maxl=height[l];
    else total+=maxl-height[l];
    l++;}
    else{
        if(height[r]>=maxr)
        maxr=height[r];
        else
        total+=maxr-height[r];
        r--;
    }
}
return total;
       
 
 
    }
};
