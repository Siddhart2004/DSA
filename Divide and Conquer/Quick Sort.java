class Main{
    static int partition(int a[],int l,int r){
        int p=a[r],i=l-1;
        for(int j=l;j<r;j++){
            if(a[j]<p){
                i++;
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        int temp=a[i+1];
        a[i+1]=a[r];
        a[r]=temp;
        return i+1;
    }
    static void quickSort(int a[],int l,int r){
        if(l<r){
            int p=partition(a,l,r);
            quickSort(a,l,p-1);
            quickSort(a,p+1,r);
        }
    }
    public static void main(String[] args){
        int a[]={5,2,4,1,3};
        quickSort(a,0,4);
        for(int x:a){
            System.out.print(x+" ");
        }
    }
}
