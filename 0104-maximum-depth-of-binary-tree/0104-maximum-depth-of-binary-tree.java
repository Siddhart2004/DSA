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
int minDepth(TreeNode* root) {
        if (root==NULL) return 0;
        if(root->left==NULL) {
            return minDepth(root->right)+1;
        }
        if(root->right==NULL) {
            return minDepth(root->left)+1;
        }
        int l=minDepth(root->left);
        int r=minDepth(root->right);
        if(l<r){
            return l+1;
        }
        return r+1;
    }

int main(){
    TreeNode* root1=new TreeNode(3);
    root1->left=new TreeNode(9);
    root1->right=new TreeNode(20);
    root1->right->left=new TreeNode(15);
    root1->right->right=new TreeNode(7);
    cout<<"root1: "<<minDepth(root1)<<endl;
    TreeNode* root2=new TreeNode(2);
    root2->right=new TreeNode(3);
    root2->right->right=new TreeNode(4);
    root2->right->right->right=new TreeNode(5);
    root2->right->right->right->right=new TreeNode(6);
    cout<<"root2: "<<minDepth(root2);
}
