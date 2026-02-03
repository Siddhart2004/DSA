import java.util.*;

class Main{
    static int minimumCost(int[] arr){
        int size=arr.length;
        int minimumValue=arr[0];
        for(int i=1;i<size;i++){
            if(arr[i]<minimumValue)
                minimumValue=arr[i];
        }

        return (size-1)*minimumValue;
    }
    public static void main(String[] args){
        int[] arr={4,3,2};
        System.out.println(minimumCost(arr));
    }
}
