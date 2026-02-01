#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r){
    int p=a[r],i=l-1;
    for(int j=l;j<r;j++){
        if(a[j]<p){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
void quickSort(int a[],int l,int r){
    if(l<r){
        int p=partition(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}
int main(){
    int a[]={5,2,4,1,3};
    quickSort(a,0,4);
    for(int x:a){
        cout<<x<<" ";
    }
}
