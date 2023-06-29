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
    int findNumber(vector <int> inorder,int startIndex, int lastIndex,int num){
        int index = -1;
        for(int i=startIndex;i<=lastIndex;i++){
            if(inorder[i]==num){
                index = i;
            }
        }
        return index;
    }
    TreeNode* traverse(vector<int>& inorder, vector<int>& postorder, int start, int end, int& postIndex){
        if(start>end || postIndex<0){
            return NULL;
        }
        int index = findNumber(inorder,start,end,postorder[postIndex]);
        cout<<index<<" ";
        TreeNode* root = new TreeNode(postorder[postIndex--]);
        
        root->right = traverse(inorder,postorder,index+1,end,postIndex);
        root->left = traverse(inorder,postorder,start,index-1,postIndex);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int start = 0;
        int end = inorder.size()-1;
        int postIndex = postorder.size()-1;
        TreeNode* Node = traverse(inorder,postorder,start,end,postIndex);
        return Node;
    }
};
