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
            void preOrder(TreeNode* root){
            if(root){
                v.push_back(root->val); // visit node;
                preOrder(root->left); // goto left child
                preOrder(root->right); // goto right child
                }
            
            }
    vector<int> preorderTraversal(TreeNode* root) {
            
        preOrder(root);
        return v;
    }
};