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
    int findIndex(vector<int>& inorder,int start,int end,int find){
        int index = 0;
        for(int i=start;i<=end;i++){
            if(inorder[i]==find){
                index = i;
            }
        } return index;
    }
    TreeNode* traverse(vector<int>& preorder, vector<int>& inorder,int inorderStartingIndex,int inroderEndingIndex,int &preIndex){
        if(inorderStartingIndex>inroderEndingIndex || preIndex>=preorder.size()){
            return NULL;
        }
        int index = findIndex(inorder,inorderStartingIndex,inroderEndingIndex,preorder[preIndex++]);
        TreeNode* root = new TreeNode(inorder[index]);
        root->left = traverse(preorder,inorder,inorderStartingIndex,index-1,preIndex);
        root->right = traverse(preorder,inorder,index+1,inroderEndingIndex,preIndex);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int initialindex = 0;
        int endingIndex = preorder.size()-1;
        int index = 0;
        TreeNode* Node = traverse(preorder,inorder,initialindex,endingIndex,index);
        return Node;
    }
};