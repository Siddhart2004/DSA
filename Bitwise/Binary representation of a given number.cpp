#include <bits/stdc++.h>
using namespace std;

string get_binary_rep(int n){
    string binary_rep="";
    for(int bit_pos=31;bit_pos>=0;bit_pos--){
        if(n&(1<<bit_pos)) binary_rep+='1';
        else binary_rep+='0';
    }
    return binary_rep;
}

int main(){
    int n=2;
    cout<<get_binary_rep(n);
    return 0;
}
