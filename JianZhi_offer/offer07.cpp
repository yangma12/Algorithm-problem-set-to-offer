#include <string>
#include <vector>
#include <iostream>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution07 {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //边界判断
        if(preorder.size() <= 0){
            return NULL;
        }

        function<TreeNode*(int pre_l,int pre_r,int in_l,int in_r)> dfs = [&](int pre_l,int pre_r,int in_l,int in_r)->TreeNode*{
            if(pre_l == pre_r){
                return new TreeNode(preorder[pre_l]);
            }
            if(pre_l > pre_r){
                return NULL;
            }
            TreeNode* node = new TreeNode(preorder[pre_l]);
            //中序遍历中找到位置
            int pos;
            for(int i = in_l;i<=in_r;i++){
                if(inorder[i] == preorder[pre_l]){
                    pos = i;
                    break;
                }
            }
            node->left = dfs(pre_l+1,pre_l+1+(pos-1-in_l),in_l,pos-1);
            node->right = dfs(pre_l+pos-in_l+1,pre_r,pos+1,in_r);

            return node;
        };
        return dfs(0,preorder.size()-1,0,inorder.size()-1);


    }
};

int main(){
    vector<int> pre = {1,2};
    vector<int> in = {2,1};

    Solution07 sol;
    TreeNode* r = sol.buildTree(pre,in);
    cout << r << endl;
    return 0;
}
