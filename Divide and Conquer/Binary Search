#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int key){
    int l=0,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==key){
            return m;
        }
        if(a[m]<key){
           l=m+1; 
        } 
        else {
            r=m-1;
        }    
    }
    return -1;
}
int main(){
    int a[]={1,2,3,4,5,7};
    cout<<binarySearch(a,6,7);
}
