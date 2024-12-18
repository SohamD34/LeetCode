// https://leetcode.com/problems/n-ary-tree-postorder-traversal

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> post;

    void PostOrder(Node*root){

        if(!root){return;}

        for(auto i:root->children){
            PostOrder(i);
        }
        post.push_back(root->val);
    }

    vector<int> postorder(Node* root) {

        PostOrder(root);
        return post; 
    }
};