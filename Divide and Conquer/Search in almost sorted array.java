class Main{
    static int search(int a[],int n,int x){
        int l=0,r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]==x){
                return m;
            }
            if(m-1>=l&&a[m-1]==x){
                return m-1;
            }
            if(m+1<=r&&a[m+1]==x){
                return m+1;
            }
            if(a[m]>x){
                r=m-2;
            }
            else{
                l=m+2;
            }
        }
        return -1;
    }
    public static void main(String[] args){
        int a[]={10,3,40,20,50,80,70};
        System.out.print(search(a,7,40));
    }
}
