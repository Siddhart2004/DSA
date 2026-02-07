#include <bits/stdc++.h>
using namespace std;

int russian_peasant_multiply(int a,int b){
    int result=0;
    while(b>0){
        if(b&1){
            result+=a;
        }
        a<<=1;
        b>>=1;
    }
    return result;
}
int main(){
    int a=2,b=5;
    cout<<russian_peasant_multiply(a,b);
    return 0;
}
