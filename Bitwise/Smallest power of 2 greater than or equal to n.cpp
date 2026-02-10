#include<bits/stdc++.h>
using namespace std;

unsigned int nextPowerOf2(unsigned int n){
    if(n==0) return 1;
    n--;
    n|=n>>1;
    n|=n>>2;
    n|=n>>4;
    n|=n>>8;
    n|=n>>16;
    n++;
    return n;
}

int main(){
    unsigned int n=17;
    cout<<nextPowerOf2(n);
    return 0;
}
