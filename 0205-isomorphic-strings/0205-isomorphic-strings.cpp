class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> hm1;
        unordered_map<char,char> hm2;
        for(int i=0;i<s.length();i++){
            char c1=s[i];
            char c2=t[i];

            if(hm1.count(c1)){
                if(hm1[c1]!=c2) return false;
            } else {
                hm1[c1]=c2;
            }

            if(hm2.count(c2)){
                if(hm2[c2]!=c1) return false;
            } else {
                hm2[c2]=c1;
            }
        }
        return true;
    }
};