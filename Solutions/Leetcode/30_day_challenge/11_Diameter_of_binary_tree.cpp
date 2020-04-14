/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    int dfs(TreeNode* node, int& ans) {
        if (node == NULL) return 0;
        int left = dfs(node->left, ans);
        int right = dfs(node->right, ans);
        
        ans = max(ans, left+right+1);
        
        return max(left, right) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 1;
        dfs(root, ans);
        return ans - 1;
    }
};