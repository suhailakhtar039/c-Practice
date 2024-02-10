#include <iostream>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0),left(NULL),right(NULL){}
    TreeNode(int val):val(0),left(NULL),right(NULL){}
    TreeNode(int val, TreeNode *left, TreeNode *right):val(val),left(left),right(right){}

};


class TreeNodeUtil{
public:
    //create a tree in simple manner
    TreeNodeUtil(){
    }
    TreeNode* createNode(int val){
        TreeNode* root = new TreeNode(val);
        root->val = val;
        root->left = nullptr;
        root->right = nullptr;
        return root;
    }

    //same tree
    bool sameTree(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL)
            return true;
        if(root1 == NULL || root2 == NULL)
            return false;

        if(root1->val == root2->val)
            return sameTree(root1->left, root2->left) && sameTree(root2->right, root2->right);
    }
};

int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);

}