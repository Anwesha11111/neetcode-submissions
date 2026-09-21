class Solution {
public:
    int trap(vector<int>& height) {

       int n =height.size();
       if(n==0) return 0;
       vector<int>maxl(n),maxr(n);
       int total=0;maxl[0]=height[0];maxr[n-1]=height[n-1];
     
       for(int i=1;i<n;i++){
        
        maxl[i]=max(maxl[i-1],height[i]);
       }
       for(int i=n-2;i>=0;i--){
       
        maxr[i]=max(maxr[i+1],height[i]);
       }
       for(int j=0;j<n;j++){
        total+=min(maxl[j],maxr[j])-height[j];
       }
return total;
       
 
 
    }
};
