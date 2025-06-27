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
    int sumNumbers(TreeNode* root) {
        int currentsum=0;
       return sumNodes( root ,currentsum);
    }

    int sumNodes(TreeNode* root,int currentsum){
        if(root==NULL) return 0;
        currentsum=(currentsum*10)+root->val;
    if(root->left==NULL && root->right==NULL) return currentsum;
     int left =sumNodes(root->left,currentsum);
     int right =sumNodes(root->right,currentsum);
     return left+right;
    }
};