#include<bits/stdc++.h>
using namespace std;

uint32_t leftRotate(uint32_t n,int d){
    d=d%32;
    return (n<<d)|(n>>(32-d));
}

uint32_t rightRotate(uint32_t n,int d){
    d=d%32;
    return (n>>d)|(n<<(32-d));
}

vector<uint32_t> rotateBits(uint32_t n,int d){
    vector<uint32_t> res(2);
    res[0]=leftRotate(n,d);
    res[1]=rightRotate(n,d);
    return res;
}

int main(){
    uint32_t n=28;
    int d=2;
    vector<uint32_t> ans=rotateBits(n,d);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}
