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

    //max depth
    int maxDepth(TreeNode* root){
        if(root == NULL)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};


int main(int argc, char const *argv[])
{
    TreeNodeUtil *node = new TreeNodeUtil();
    TreeNode* root = node->createNode(3);
    root->left = node->createNode(9);
    root->right = node->createNode(20);
    root->right->left = node->createNode(15);
    root->right->right = node->createNode(7);

    cout<<node->maxDepth(root)<<endl;
//    TreeNode *root = new TreeNode();
//    root = node->createNode(4);
//    cout<<"root-val = "<<root->left<<endl;

    // int ans = t->maxDepth(root);
    // cout<<ans<<endl;

    return 0;
}

