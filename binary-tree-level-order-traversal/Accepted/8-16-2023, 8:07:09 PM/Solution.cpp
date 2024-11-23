// https://leetcode.com/problems/binary-tree-level-order-traversal

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> v;
        queue<TreeNode*> q;

        if(root){
            q.push(root);
        } 
        
        while (q.size()) {

            int len = q.size();
            vector<int> row;

            while (len--) {
                TreeNode* node = q.front();
                
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }

                row.push_back(node->val);
                q.pop();
            } 

            v.push_back(row);
        }
        return v; 
    }
};