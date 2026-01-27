/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qp;
        queue<TreeNode*> qq;
        qp.push(p);
        qq.push(q);
        while(!qp.empty()) {
            TreeNode* n1=qp.front();
            TreeNode* n2=qq.front();
            qp.pop();
            qq.pop();
            if(n1==NULL&&n2==NULL) continue;
            if(n1==NULL||n2==NULL) return false;
            if(n1->val!=n2->val) return false;
            qp.push(n1->left);
            qp.push(n1->right);
            qq.push(n2->left);
            qq.push(n2->right);
        }
        return true;
    }
};