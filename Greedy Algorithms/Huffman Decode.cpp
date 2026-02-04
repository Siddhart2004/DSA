#include<bits/stdc++.h>
using namespace std;

string decodeHuffman(string encoded){
    map<string,char> mp;
    mp["0"]='f';
    mp["100"]='c';
    mp["101"]='d';
    mp["1100"]='a';
    mp["1101"]='b';
    mp["111"]='e';
    string ans="";
    string temp="";

    for(int i=0;i<encoded.size();i++){
        temp+=encoded[i];
        if(mp.find(temp)!=mp.end()){
            ans+=mp[temp];
            temp="";
        }
    }
    return ans;
}

int main(){
    string encoded="110011011001011110";
    cout<<decodeHuffman(encoded);
    return 0;
}
