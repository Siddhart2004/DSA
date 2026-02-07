#include <bits/stdc++.h>
using namespace std;

bool is_kth_bit_set(int n,int k){
    return (n&(1<<k))!=0;
}

int main(){
    int n=7,k=2;
    cout<<(is_kth_bit_set(n,k)?"true":"false");
    return 0;
}
