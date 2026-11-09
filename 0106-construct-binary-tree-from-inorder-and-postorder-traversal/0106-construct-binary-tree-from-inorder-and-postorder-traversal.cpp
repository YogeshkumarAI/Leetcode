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

    int PostIndex;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder, int start, int end){
        if(start > end){
            return NULL;
        }


        // create root;
        TreeNode* root = new TreeNode(postorder[PostIndex]);
        PostIndex--;

        int i = start;
        while(inorder[i] != root->val){
            i++;
        }

        // build right subtree;
         root->right = buildTree(inorder, postorder, i+1, end);

        // build left subtree;
        root->left = buildTree(inorder, postorder, start, i - 1);


        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();

        PostIndex = n - 1;
        return buildTree(inorder, postorder, 0, n - 1);
    }
};