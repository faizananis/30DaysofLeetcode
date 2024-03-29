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
    void makeInvert(TreeNode *r){
        if(r!=NULL)
        {
            TreeNode *temp=r->left;
            r->left=r->right;
            r->right=temp;
            makeInvert(r->left);
            makeInvert(r->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
        {
            return NULL;
        }
        if(root->left==NULL&&root->right==NULL)
        {
            return root;
        }
        makeInvert(root);
        return root;
    }
};