#include <bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
     TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:

    vector<vector<int>> res;
    unordered_map<TreeNode*, TreeNode*> parent;
    void getpath(TreeNode *t){
        vector<int> tmp;
        while(t != nullptr){
            tmp.push_back(t->val);
            t = parent[t];
        }
        reverse(tmp.begin(), tmp.end());
        res.push_back(tmp);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root == nullptr)
            return res;
        queue<TreeNode*> tnode;
        tnode.push(root);
        queue<int> sum;
        sum.push(0);
        while(root != nullptr){
            TreeNode *pt = tnode.front();
            tnode.pop();
            int rec = sum.front() + pt->val;
            sum.pop();
            if(pt->left == nullptr && pt->right == nullptr){
                if(rec == targetSum){
                    getpath(pt);
                }
            }else{
                if(pt->left){
                    parent[pt->left] = pt;
                    sum.push(rec);
                    tnode.push(pt->left);
                }if(pt->right){
                    parent[pt->right] = pt;
                    sum.push(rec);
                    tnode.push(pt->right);
                }
            }
        }
        return res;
    }
};

int main(){
    return 0;
}