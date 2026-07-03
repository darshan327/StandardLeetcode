#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val  = x;
        left = nullptr;
        right = nullptr;
    }
};


   void preorder(TreeNode* root){
    if(root==nullptr){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
   }

      class Solution {
        public : 
         TreeNode* SearchBST(TreeNode* root, int val){
            if(root==nullptr || root->val==val){
                return root;
            }
            if(val<root->val){
                return SearchBST(root->left,val);
            }
            else{
                return SearchBST(root->right,val);
            }
         }
      };

    TreeNode* insert(TreeNode* root, int val){
        if(root==nullptr){
            return new TreeNode(val);
        }
        if(val<root->val){
            root->left = insert(root->left,val);
            }
        else{
            root->right = insert(root->right,val);
        }
        return root;
    }



  int main(){
    TreeNode* root = nullptr;

    int n;
    cout<<"Enter the NUmber of nodes: ";
    cin>>n;
    cout<<"Enter the values of nodes: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        root=insert(root,x);
    }
    int key;
    cout<<"Enter the key to search:";
    cin>>key;

    Solution obj;
    TreeNode* ans = obj.SearchBST(root,key);
    if(ans){
        cout<<"Key found: ";
       preorder(ans);
       cout<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

    return 0;
  }