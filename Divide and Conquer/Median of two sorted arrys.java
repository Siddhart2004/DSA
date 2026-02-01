class Main{
    static double findMedian(int a[],int n,int b[],int m){
        int v[]=new int[n+m];
        int k=0;
        for(int i=0;i<n;i++){
            v[k++]=a[i];
        }
        for(int i=0;i<m;i++){
            v[k++]=b[i];
        }
        java.util.Arrays.sort(v);
        int size=v.length;
        if(size%2==1){
            return v[size/2];
        }
        return (v[size/2-1]+v[size/2])/2.0;
    }

    public static void main(String[] args){
        int a[]={1,3};
        int b[]={2};
        System.out.print(findMedian(a,2,b,1));
    }
}
