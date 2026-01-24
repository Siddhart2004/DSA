class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character, Integer> hm = new HashMap<>();
        if (s.length()!=t.length()) return false;
        for(char i:s.toCharArray()) {
            hm.put(i,hm.getOrDefault(i,0)+1);
        }
        for(char i:t.toCharArray()){
            if(!hm.containsKey(i) || hm.get(i)==0){
                return false;
            }
            hm.put(i,hm.get(i)-1);
        }return true;
    }
}