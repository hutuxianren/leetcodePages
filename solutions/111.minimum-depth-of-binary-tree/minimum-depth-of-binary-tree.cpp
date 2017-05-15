/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 * 结题思路：和找最大距离不同之处在于：找最小距离要注意(l<r)? l+1:r+1的区别应用，因为可能存在左右子树为空的情况，此时值就为0，但显然值是不为0的（只有当二叉树为空才为0），所以，在这里注意一下即可！
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int left=minDepth(root->left);
        int right=minDepth(root->right);
        if(!left) return right+1;
        if(!right) return left+1;
        return left>right?right+1:left+1;
    }
};