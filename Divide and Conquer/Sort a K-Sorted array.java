import java.util.*;

class Main{
    public static void main(String[] args){
        int a[]={6,5,3,2,8,10,9};
        int k=3;
        PriorityQueue<Integer> pq=new PriorityQueue<>();
        int idx=0;
        for(int i=0;i<7;i++){
            pq.add(a[i]);
            if(pq.size()>k){
                a[idx++]=pq.peek();
                pq.poll();
            }
        }
        while(!pq.isEmpty()){
            a[idx++]=pq.peek();
            pq.poll();
        }
        for(int x:a){
            System.out.print(x+" ");
        }
    }
}
