class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(),i=n-1;
        digits[n-1]+=1;
        
            while (i >= 0 && digits[i] == 10) {
            digits[i] = 0;
            if (i == 0) {
                digits.insert(digits.begin(), 1);
            } else {
                digits[i-1] += 1;
            }
            i--;
        
            }
        return digits;
    }
    
};
