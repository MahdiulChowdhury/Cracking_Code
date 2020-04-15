/********************************************
iven a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7

return its depth = 3.
********************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution_One {
public:
     
    int maxDepth(TreeNode* root) {
        int leftDepth; 
        int rightDepth; 
        if (root == NULL)
        {
            return 0; 
        } 
        leftDepth = maxDepth(root->left);
        rightDepth = maxDepth(root->right);
        
        return max(leftDepth,rightDepth)+1;
    }
    
};

class Solution_Two {
public:
     
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        int currDepth = 0;
        
        while(!q.empty()){
            int size = q.size();
            cout << "size=" << size << endl; 
            for(int i = 0; i < size; i++){
                root = q.front();
                q.pop();
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            
            currDepth++;
        }
        
        return currDepth;
    }
};