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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> vss;
        vector<int> v;

        while(!q.empty()){
            v.clear();
            int n = q.size();
            for(int i=0;i<n;i++){
            TreeNode* u = q.front();
            q.pop();
            v.push_back(u->val);
            if(u->left){q.push(u->left);}
            if(u->right){q.push(u->right);}        
            }
            vss.push_back(v);
        }
        return vss;
    }
};
