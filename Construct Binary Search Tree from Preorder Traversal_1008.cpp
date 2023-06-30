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
    int findNumber(int start,int end,vector <int> inorder,int value){
        int index = -1;
        for(int i=start;i<=end;i++){
            if(inorder[i]==value){
                index = i;
            }
        }   return index;
    }
    TreeNode* traverse(vector<int> preorder,vector <int> inorder,int inIndex,int endIndex, int& preIndex){
        if(inIndex>endIndex || preIndex>preorder.size()-1){
            return NULL;
        }
        int pos = findNumber(inIndex,endIndex,inorder,preorder[preIndex]);
        TreeNode* root = new TreeNode(preorder[preIndex++]);
        root->left = traverse(preorder,inorder,inIndex,pos-1,preIndex);
        root->right = traverse(preorder,inorder,pos+1,endIndex,preIndex);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector <int> inorder;
        inorder = preorder;
        sort(inorder.begin(),inorder.end());
        int preIndex = 0;
        TreeNode* Node = traverse(preorder,inorder,0,inorder.size()-1,preIndex);
        return Node;
    }
};

