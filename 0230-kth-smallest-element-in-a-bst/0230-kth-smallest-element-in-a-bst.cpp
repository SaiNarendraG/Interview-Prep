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
    
    void Inorder(TreeNode* root , int &ans , int key, int &cnt) {
        
        if(root==NULL) return ; 
        
        Inorder(root->left , ans,key,cnt) ; 
        cnt++ ; 
        
        if(cnt==key) {
            ans = root->val ; 
            return ; 
        } Inorder(root->right, ans,key,cnt) ; 
    }
    int kthSmallest(TreeNode* root, int k) {
        
        int ans = -1 ; 
        int cnt = 0 ; 
        
        Inorder(root , ans , k , cnt) ; 
        return ans ;
        
    }
};