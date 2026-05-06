  // Leetcode NUmber : 94. Binary Tree Inorder Traversal

  // time complexity : O(n)
  // space complexity : O(n)

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode*> st;
        TreeNode* node =root;
    
        while(true){
        
            if(node!=nullptr){
                st.push(node);
                node=node->left;
            }else{
                if(st.empty()==true) break;
                node = st.top();
                st.pop();
                res.push_back(node->val);
                node = node->right;
            }
        }
        return res;
    }
};

