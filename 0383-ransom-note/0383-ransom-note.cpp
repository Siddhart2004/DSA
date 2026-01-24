class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>hm;
        for(char i:magazine){
            hm[i]++;
        }
        for (char i:ransomNote){
            if (hm[i]==0){
                return false;
            }
            hm[i]--;

        }return true;
    }
};