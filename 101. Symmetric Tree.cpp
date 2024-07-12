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


 // Best Solution so much code.
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root->right && !root->left ){
            return true;
        }
        if(!root->right){
            return false;
        }
        if(!root->left){
            return false;
        }
        if(root->left->val != root->right->val){
            return false;
        }
        return recursiveChecker(root->left, root->right);
    }
    bool recursiveChecker(TreeNode* node1, TreeNode* node2){
        if(!node1 && !node2 ){
            return true;
        }
        if(!node1){
            return false;
        }
        if(!node2){
            return false;
        }
        if(node1->val != node2->val){
            return false;
        }
        bool res1 = recursiveChecker(node1->left, node2->right);
        bool res2 = recursiveChecker(node1->right, node2->left);
        if(res1 == true && res2 == true){
            return true;
        }
        return false;
    }


    //Literally same code in more readable form
    //  bool isMirror(TreeNode* left, TreeNode* right) {
    //     if (!left && !right) return true;
    //     if (!left || !right) return false;
    //     return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
    // }

    // bool isSymmetric(TreeNode* root) {
    //     if (!root) return true;
    //     return isMirror(root->left, root->right);
    // }
};
