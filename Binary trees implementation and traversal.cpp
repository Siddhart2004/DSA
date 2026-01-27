#include <iostream>
#include <queue>
using namespace std;

class BinaryTree {
    struct Node {
        int val;
        Node* left;
        Node* right;
        Node(int x) {
            val=x;
            left=NULL;
            right=NULL;
        }
    };
public:
    Node* root;

    BinaryTree() {
        root=NULL;
    }
    // insert 
    void insert(int x) {
        Node* n=new Node(x);
        if(root==NULL) {
            root=n;
            return;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            Node* temp=q.front();
            q.pop();
            if(temp->left==NULL) {
                temp->left=n;
                return;
            } else q.push(temp->left);
            if(temp->right==NULL) {
                temp->right=n;
                return;
            } else q.push(temp->right);
        }
    }

    // BFS 
    void bfs() {
        if(root==NULL) return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            Node* temp=q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
        cout<<endl;
    }
    // DFS(in)
    void inorder(Node* root) {
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
    // DFS(pre)
    void preorder(Node* root) {
        if(root==NULL) return;
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    // DFS(post)
    void postorder(Node* root) {
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->val<<" ";
    }
};

int main() {
    BinaryTree bt;
    bt.insert(1);
    bt.insert(2);
    bt.insert(3);
    bt.insert(4);
    bt.insert(5);
    cout<<"BFS: ";
    bt.bfs();
    cout<<"Inorder: ";
    bt.inorder(bt.root);
    cout<<endl;
    cout<<"Preorder: ";
    bt.preorder(bt.root);
    cout<<endl;
    cout<<"Postorder: ";
    bt.postorder(bt.root);
    cout<<endl;
    return 0;
}
