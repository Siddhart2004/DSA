#include<bits/stdc++.h>
using namespace std;

int minimumRotations(int currentCode,int unlockCode){
    int totalRotations=0;
    while(currentCode>0 || unlockCode>0){
        int currentDigit=currentCode%10;
        int targetDigit=unlockCode%10;
        int diff=abs(currentDigit-targetDigit);
        totalRotations+=min(diff,10-diff);
        currentCode/=10;
        unlockCode/=10;
    }
    return totalRotations;
}
int main(){
    int currentCode=2345;
    int unlockCode=5432;
    cout<<minimumRotations(currentCode,unlockCode);
    return 0;
}
