// https://leetcode.com/problems/binary-tree-preorder-traversal

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
    vector<int> vec;
        
    void preorder( TreeNode* node){
        vec.push_back(node->val);
        if(node->left){
            preorder(node->left);
        }
        if(node->right){
            preorder(node->right);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL){
            return vec;
        }
        preorder(root);
        return vec;
    }
};