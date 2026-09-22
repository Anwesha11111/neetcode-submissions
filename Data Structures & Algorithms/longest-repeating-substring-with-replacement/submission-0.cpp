class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left=0,maxc=0,result=0;
        for(int right=0;right<s.size();right++){
            freq[s[right]-'A']++;
            maxc=max(maxc,freq[s[right]-'A']);
            while((right-left+1)-maxc>k){
                freq[s[left]-'A']--;
                left++;
            }
            result=max(result,right-left+1);
        }
        return result;
    }
};
