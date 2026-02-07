#include <bits/stdc++.h>
using namespace std;

int find_xor(int x,int y){
    int result=0;

    for(int bit_pos=31;bit_pos>=0;bit_pos--){
        bool bit_x=(x&(1<<bit_pos))!=0;
        bool bit_y=(y&(1<<bit_pos))!=0;
        if(bit_x!=bit_y){
            result|=(1<<bit_pos);
        }
    }
    return result;
}

int main(){
    int x=1,y=2;
    cout<<find_xor(x,y);
    return 0;
}
