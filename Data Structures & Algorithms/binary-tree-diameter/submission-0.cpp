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
    int maxDiameter=0;
    int diameterOfBinaryTree(TreeNode* root) {
        calHeight(root);
        return maxDiameter;
    }
private:
    int calHeight(TreeNode* root){
        if(root==nullptr) return 0;
        
        int leftheight =calHeight(root->left);
        int rightheight=calHeight(root->right);
        maxDiameter=max(maxDiameter, leftheight+rightheight);

        return 1+max(leftheight,rightheight);
    }

};
