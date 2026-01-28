#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};
bool isMirror(TreeNode* a,TreeNode* b){
    if(a==NULL&&b==NULL) return true;
    if(a==NULL||b==NULL) return false;
    if(a->val!=b->val) return false;
    return isMirror(a->left,b->right)&&isMirror(a->right,b->left);
}
bool isSymmetric(TreeNode* root){
    if(root==NULL) return true;
    return isMirror(root->left,root->right);
}

int main(){
    TreeNode* root1=new TreeNode(1);
    root1->left=new TreeNode(2);
    root1->right=new TreeNode(2);
    root1->left->left=new TreeNode(3);
    root1->left->right=new TreeNode(4);
    root1->right->left=new TreeNode(4);
    root1->right->right=new TreeNode(3);
    TreeNode* root2=new TreeNode(1);
    root2->left=new TreeNode(2);
    root2->right=new TreeNode(2);
    root2->left->right=new TreeNode(3);
    root2->right->right=new TreeNode(3);

    cout<<"Tree 1: ";
    if(isSymmetric(root1)) cout<<"true\n";
    else cout<<"false\n";
    cout<<"Tree 2: ";
    if(isSymmetric(root2)) cout<<"true\n";
    else cout<<"false\n";
}
