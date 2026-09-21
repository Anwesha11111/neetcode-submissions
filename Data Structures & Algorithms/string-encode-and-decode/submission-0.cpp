class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
   for(auto p:strs){
    str+=to_string(p.size());
    str+="#"+p;
   }
   return str;
    }
 
    vector<string> decode(string s) { vector<string> d;
    int i=0;
    while(i<s.size()){
        int j=i;
        while(s[j]!='#')j++;
        int len=stoi(s.substr(i,j-i));
        string word=s.substr(j+1,len);
        d.push_back(word);
        i=j+1+len;
    }
    return d;
    
    
    }
};
