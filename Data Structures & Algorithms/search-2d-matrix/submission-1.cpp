class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) { int cols=matrix[0].size();
        for(int m=0;m<matrix.size();m++){
            int r=cols-1,l=0;
            while(l<=r){
                int mid=l+ (r-l)/2;
                if(matrix[m][mid]==target)
                return true;
                else if(matrix[m][mid]<target)
                l=mid+1;
                else
                r=mid-1;
            }
        }
        return false;
    }
};
