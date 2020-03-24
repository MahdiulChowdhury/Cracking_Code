
/*
 Given two non-empty binary trees s and t, check whether tree t has exactly the same structure and node values with a subtree of s. A subtree of s is a tree consists of a node in s and all of this node's descendants. The tree s could also be considered as a subtree of itself.

Example 1:
Given tree s:

     3
    / \
   4   5
  / \
 1   2

Given tree t:

   4 
  / \
 1   2

Return true, because t has the same structure and node values with a subtree of s.

Example 2:
Given tree s:

     3
    / \
   4   5
  / \
 1   2
    /
   0

Given tree t:

   4
  / \
 1   2
*/

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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (t == NULL) 
            return true; 
        if (s == NULL)
            return false; 
        if (isTreeIdentical(s,t))
            return true; 
         return (isSubtree (s->left,t) || 
                          isSubtree(s->right,t));
    }
    bool isTreeIdentical(TreeNode* root1,TreeNode* root2)
    {
        if (root1 == NULL && root2 == NULL){
            return true;
        }
        if (root1 != NULL && root2 != NULL) {
            if (root1->val == root2->val &&
            isTreeIdentical(root1->left, root2->left) &&
            isTreeIdentical(root1->right,root2->right)){
                return true; 
            }
        }
        return 0; 
    }
};