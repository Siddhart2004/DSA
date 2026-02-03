import java.util.*;

class Main{
    static int minElements(int[] arr){
        int totalSum=0;
        for(int x:arr) totalSum+=x;
        Arrays.sort(arr);
        int currSum=0,cnt=0;
        for(int i=arr.length-1;i>=0;i--){
            currSum+=arr[i];
            cnt++;
            if(currSum>totalSum-currSum)
                return cnt;
        }
        return cnt;
    }
    public static void main(String[] args){
        int[] arr={3,1,7,1};
        System.out.println(minElements(arr));
    }
}
