class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        HashMap<Integer,Integer> hm=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int num=nums[i];
            if(hm.containsKey(target-num)){
                return new int[]{hm.get(target-num),i};
            }
            hm.put(num,i);}
            return new int[]{};
    }
        }
