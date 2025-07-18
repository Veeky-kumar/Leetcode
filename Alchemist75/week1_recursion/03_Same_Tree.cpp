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
    bool isSameTree(TreeNode* p, TreeNode* q) {
       
        if(!p && !q){
            return true;
        }
        if(p==nullptr || q==nullptr){
            return false;
        }
    
        //base cases are cases where it escapes immediately.
        //checking if values are true will lead to recursive cases NOT base case
        //hence check if values false;
        if(p->val!=q->val){
            return false;
        }

        //recursive case.
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};