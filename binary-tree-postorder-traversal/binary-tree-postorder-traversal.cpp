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
    vector<int> v;
    void postOrder(TreeNode *root){
        if(root){
            postOrder(root->left); // visit left child
            postOrder(root->right); // visit right child
            v.push_back(root->val); // visit node
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return v; // return vector
        
    }
};