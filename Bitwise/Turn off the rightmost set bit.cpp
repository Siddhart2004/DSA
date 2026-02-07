#include <bits/stdc++.h>
using namespace std;

int unset_rightmost_set_bit(int n){
    return n&(n-1);
}

int main(){
    int n=12;
    cout<<unset_rightmost_set_bit(n);
    return 0;
}
