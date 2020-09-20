#include <vector>
using namespace std;

// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };


class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.size() == 0) return NULL;  
        int root = preorder[0];
        int rootIndex;
        for(int i = 0; i<inorder.size(); i++){
            if (inorder[i] == root){
                rootIndex = i;
                break;
            }
        }
        vector<int> leftTree,rightTree;
        for(int i = 0; i<inorder.size();i++){
            if(i<rootIndex) leftTree.push_back(inorder[i]);
            else if(i>rootIndex) rightTree.push_back(inorder[i]);
        }
        return BuildTreeRecursive(0,root,leftTree,rightTree,preorder,inorder);
    }

private:
    TreeNode* BuildTreeRecursive(int rootIndex,int root,vector<int>& leftTree, vector<int>& rightTree,vector<int>& preorder, vector<int>& inorder){
        TreeNode* curNode = new TreeNode(root);
        if (leftTree.size() == 0 && rightTree.size() == 0){
            curNode->left = NULL;
            curNode->right = NULL;
            return curNode;
        }
        int leftIndex, leftRoot;
        vector<int> leftLeft,leftRight;
        if (leftTree.size() != 0){
            leftIndex = rootIndex+1;
            leftRoot = preorder[leftIndex];
            int reFlag = 0;
            for(int i = 0; i<leftTree.size();i++){
                if (leftTree[i] == leftRoot){
                    reFlag = 1;
                    continue;
                }
                if(!reFlag) leftLeft.push_back(leftTree[i]);
                else leftRight.push_back(leftTree[i]);
            }
        }
        
        int rightRoot,rightIndex;
        vector<int> rightLeft,rightRight;
        if (rightTree.size() != 0){
            rightIndex = rootIndex+leftTree.size()+1;
            rightRoot = preorder[rightIndex];
            int reFlag = 0;
            for(int i = 0; i<rightTree.size();i++){
                if (rightTree[i] == rightRoot){
                    reFlag = 1;
                    continue;
                }
                if(!reFlag) rightLeft.push_back(rightTree[i]);
                else rightRight.push_back(rightTree[i]);
            }
        }
        

        if (leftTree.size() == 0) curNode->left = NULL;
        else curNode->left = BuildTreeRecursive(leftIndex,leftRoot,leftLeft,leftRight,preorder,inorder);
        if (rightTree.size() == 0) curNode->right = NULL;
        else curNode->right = BuildTreeRecursive(rightIndex,rightRoot,rightLeft,rightRight,preorder,inorder);
        return curNode;
    }
};

// int main(void){
//     vector<int> preorder = {3,9,20,15,7};
//     vector<int> inorder = {9,3,15,20,7};
//     Solution s;
//     s.buildTree(preorder,inorder);
//     return 0;

// }