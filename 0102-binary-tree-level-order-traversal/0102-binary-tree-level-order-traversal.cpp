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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> t;
        vector<vector<int>> arr;
        TreeNode *temp=NULL;
        int size=0;
        if(root==NULL)
        {
            return arr;
        }
        q.push(root);
        while(q.empty()==0)
        {
            int i=0;
            size=q.size();
            for(i=0;i<size;i++)
            {
                temp=q.front();
                q.pop();
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                t.push_back(temp->val);
            }
            arr.push_back(t);
            t.clear();
        }
        return arr;
    }
};