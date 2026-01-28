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
bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        if(root->left==NULL&&root->right==NULL) {
            return (root->val==targetSum);
        }
        return (hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right,targetSum-root->val));
    }

int main(){
    TreeNode* root1=new TreeNode(5);
    root1->left=new TreeNode(4);
    root1->right=new TreeNode(8);
    root1->left->left=new TreeNode(11);
    root1->left->left->left=new TreeNode(7);
    root1->left->left->right=new TreeNode(2);
    root1->right->left=new TreeNode(13);
    root1->right->right=new TreeNode(4);
    root1->right->right->right=new TreeNode(1);
    int targetSum1=22;
    if(hasPathSum(root1,targetSum1)) cout<<"root 1: true\n";
    else cout<<"root 1: false\n";

    TreeNode* root2=new TreeNode(1);
    root2->left=new TreeNode(2);
    root2->right=new TreeNode(3);
    int targetSum2=5;
    if(hasPathSum(root2,targetSum2)) cout<<"root 2: true";
    else cout<<"root 2: false";
}
