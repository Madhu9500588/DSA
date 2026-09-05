//Preorder : Root, Left, Right
//Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

//Output: [1,2,4,5,6,7,3,8,9]

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        preorder(root,arr);
        return arr;
    }

    void preorder(TreeNode* root, vector<int> &arr)
    {
        if(root==nullptr)
        {
            return;
        }

        arr.push_back(root->val);
        preorder(root->left, arr);
        preorder(root->right, arr);
    }
};
