import java.util.*;

class Item{
    int val,wt;
    Item(int v,int w){
        val=v;
        wt=w;
    }
}
class Solution{
    static double fractionalKnapsack(int[] val,int[] wt,int cap){
        int n=val.length;
        Item[] arr=new Item[n];

        for(int i=0;i<n;i++)
            arr[i]=new Item(val[i],wt[i]);
        Arrays.sort(arr,(a,b)->Double.compare(
            (double)b.val/b.wt,
            (double)a.val/a.wt
        ));

        double ans=0.0;

        for(int i=0;i<n;i++){
            if(arr[i].wt<=cap){
                ans+=arr[i].val;
                cap-=arr[i].wt;
            }else{
                ans+=((double)arr[i].val/arr[i].wt)*cap;
                break;
            }
        }
        return ans;
    }
    public static void main(String[] args){
        int[] val={60,100,120};
        int[] wt={10,20,30};
        int cap=50;
        System.out.println(fractionalKnapsack(val,wt,cap));
    }
}
