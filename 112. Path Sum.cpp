class Solution {
public:

    void solve(TreeNode* root,int &targetSum, int sum,int &count){
         if(!root){
            return;
         }
         if(root->left==nullptr && root->right==nullptr){
             if(sum+root->val==targetSum){
                count=1;
             }
         }
         solve(root->left,targetSum,sum+root->val,count);
         solve(root->right,targetSum,sum+root->val,count);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        int val1=0,val2=0;
        solve(root,targetSum,val1,val2);
        return val2==1;
    }
};