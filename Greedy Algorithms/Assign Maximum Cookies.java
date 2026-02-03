import java.util.*;

class Main{
    static int maxChildren(int[] greed,int[] cookie){
        Arrays.sort(greed);
        Arrays.sort(cookie);
        int i=0,j=0,cnt=0;
        while(i<greed.length && j<cookie.length){
            if(greed[i]<=cookie[j]){
                cnt++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return cnt;
    }
    public static void main(String[] args){
        int[] greed={1,10,3};
        int[] cookie={1,2,3};

        System.out.println(maxChildren(greed,cookie));
    }
}
