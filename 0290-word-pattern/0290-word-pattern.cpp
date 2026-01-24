class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp;
        stringstream ss(s);
        while(ss>>temp){
            words.push_back(temp);
        }
        if(pattern.length()!=words.size()) return false;
        unordered_map<char,string> hm1;
        unordered_map<string,char> hm2;
        for(int i=0;i<pattern.length();i++){
            char c=pattern[i];
            string w=words[i];
            if(hm1.count(c)){
                if(hm1[c]!=w) return false;
            } else {
                hm1[c]=w;
            }
            if(hm2.count(w)){
                if(hm2[w]!=c) return false;
            } else {
                hm2[w]=c;
            }
        }
        return true;
    }
};