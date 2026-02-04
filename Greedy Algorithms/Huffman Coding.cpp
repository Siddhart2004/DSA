#include<bits/stdc++.h>
using namespace std;

// huffman binary tree   
class Node{
public:
    char ch;
    int freq;
    Node*left;
    Node*right;
    Node(char c,int f){
        ch=c;
        freq=f;
        left=NULL;
        right=NULL;
    }
};

class Compare{
public:
    bool operator()(Node*a,Node*b){
        return a->freq>b->freq;
    }
};

// generating codes
void preOrder(Node*root,string curr,vector<pair<char,string>>&ans){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        ans.push_back(make_pair(root->ch,curr));
        return;
    }
    preOrder(root->left,curr+"0",ans);
    preOrder(root->right,curr+"1",ans);
}

// tree building - priority queue + prefix codes
vector<pair<char,string>> huffmanCodes(string s,vector<int> freq){
    priority_queue<Node*,vector<Node*>,Compare> pq;
    for(int i=0;i<s.size();i++){
        pq.push(new Node(s[i],freq[i]));
    }
    while(pq.size()>1){
        Node*l=pq.top(); pq.pop();
        Node*r=pq.top(); pq.pop();
        Node*parent=new Node('$',l->freq+r->freq);
        parent->left=l;
        parent->right=r;
        pq.push(parent);
    }
    vector<pair<char,string>> ans;
    preOrder(pq.top(),"",ans);
    return ans;
}

int main(){
    string s="abcdef";
    vector<int> freq={5,9,12,13,16,45};
    vector<pair<char,string>> ans=huffmanCodes(s,freq);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" -> "<<ans[i].second<<endl;
    }
    return 0;
}
