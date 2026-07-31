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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;

        while( !s1.empty() || p != nullptr || !s2.empty() || q != nullptr){
            while( p != nullptr && q != nullptr){
                if(p->val != q->val){
                    return false;
                }
                s1.push(p);
                s2.push(q);
                p = p->left;
                q = q-> left;
            }
            if((p == nullptr) != (q == nullptr)){return false;}
            p = s1.top(); s1.pop();
            q = s2.top(); s2.pop();
            p = p->right;
            q = q-> right;
            if((p == nullptr) != (q == nullptr)){return false;}

        }
       
        return true;

    }
};
