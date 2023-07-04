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
    double findAverage(vector <double> v){
        double sum = 0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        sum /= v.size();
        return sum; 
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector <double> ans;
        if(root==NULL){
            return ans;
        }
        vector <double> v;
        queue <TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp){
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                v.push_back(temp->val);
            }
            else{
                if(!q.empty()){
                    q.push(NULL);
                    double a = findAverage(v);
                    v.resize(0);
                    ans.push_back(a);
                }
                else{
                    double b = findAverage(v);
                    ans.push_back(b);
                }
            }
        }
        return ans;
    }
};

