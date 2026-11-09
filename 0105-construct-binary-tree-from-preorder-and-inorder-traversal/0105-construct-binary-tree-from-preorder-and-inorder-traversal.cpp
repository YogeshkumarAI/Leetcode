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
    int PreIndex;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int start, int end){
        if(start > end){
            return NULL;
        }

        // create root;
        TreeNode* root = new TreeNode(preorder[PreIndex]);
        PreIndex++;

        int i = start;
        while(inorder[i] != root->val){
            i++;
        }

        // for(int i = start; i <= end; i++){
        //     if(inorder[i] == root->data){
        //         break;
        //     }

        // build left subtree;
        root->left = buildTree(preorder, inorder, start, i - 1);

        // build right subtree;
         root->right = buildTree(preorder, inorder, i+1, end);
        


        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();

        PreIndex = 0;
        return buildTree(preorder, inorder, 0, n - 1);
    }
};