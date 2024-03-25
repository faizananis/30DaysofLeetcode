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
    bool preTrav(TreeNode*p,TreeNode *q)
    {
        bool check;
        if(p==NULL&&q==NULL)
        {
            return true;
        }
        else if(p==NULL||q==NULL)
        {
            return false;
        }
        else
        {
            if(p->val==q->val)
            {
                check=preTrav(p->left,q->left);
                if(check==0)
                {
                    return false;
                }
                check=preTrav(p->right,q->right);
                if(check==0)
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return preTrav(p,q);
    }
};