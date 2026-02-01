import java.util.*;

class Main{
    static void merge(int a[],int l,int m,int r){
        int n1=m-l+1,n2=r-m;
        int L[]=new int[n1];
        int R[]=new int[n2];
        for(int i=0;i<n1;i++){
            L[i]=a[l+i];
        }
        for(int i=0;i<n2;i++){
            R[i]=a[m+1+i];
        }
        int i=0,j=0,k=l;
        while(i<n1&&j<n2){
            if(L[i]<=R[j]){
                a[k++]=L[i++];
            }
            else{
                a[k++]=R[j++];
            }
        }
        while(i<n1){
            a[k++]=L[i++];
        }
        while(j<n2){
            a[k++]=R[j++];
        }
    }
    static void mergeSort(int a[],int l,int r){
        if(l>=r){
            return;
        }
        int m=l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
    public static void main(String[] args){
        int a[]={5,2,4,1,3};
        mergeSort(a,0,4);
        for(int x:a){
            System.out.print(x+" ");
        }
    }
}
