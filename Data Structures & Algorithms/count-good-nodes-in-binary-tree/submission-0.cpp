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
    int nodes(TreeNode* root, int maxval){
        if(!root) return 0;

        int count=0;

        if(root->val >= maxval){
            count=1;
            maxval=root->val;
        }

        count+=nodes(root->left,maxval);
        count+=nodes(root->right,maxval);

        return count;
    }
    int goodNodes(TreeNode* root) {
       if(!root)
       return 0;

       return nodes(root,root->val);
    }
};
