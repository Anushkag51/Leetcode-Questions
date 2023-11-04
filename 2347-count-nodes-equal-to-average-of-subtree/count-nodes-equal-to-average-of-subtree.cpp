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
    pair<int,int>count(TreeNode* root, int&answer)
    {
        if(root==NULL)
            return {0,0};
        auto leftsubtree=count(root->left,answer);
        auto rightsubtree=count(root->right,answer);
        int sum=root->val+leftsubtree.first+rightsubtree.first;
        int totalelement=leftsubtree.second+rightsubtree.second+1;
        if(sum/totalelement==root->val)
        {
            answer++;
        }
        return {sum,totalelement};
    }
    int averageOfSubtree(TreeNode* root) {
        int answer=0;
        count(root,answer);
        return answer;
    }
};