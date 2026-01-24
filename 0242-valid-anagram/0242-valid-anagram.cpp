class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hm;
        if(s.length()!=t.length()) return false;
        for(char i:s){
            hm[i]=hm[i]+1;
        }
        for(char i:t){
            if(!hm.count(i)||hm[i]==0){
                return false;
            }
            hm[i]=hm[i]-1;
        }
        return true;
    }
};
