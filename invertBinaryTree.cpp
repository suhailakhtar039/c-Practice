#include<iostream>
#include<climits>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0),left(NULL),right(NULL){}
    TreeNode(int val):val(val),left(NULL),right(NULL){}
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
    //printing preorder
    void preOrder(TreeNode *root){
        if(root == NULL)return;
        cout<<(root->val)<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
    //inverse of binary tree
    void inverse(TreeNode *root){
        if(root == NULL)
            return;
        inverse(root->left);
        inverse(root->right);
        swap(root->left,root->right);
    }
    // max path sum
    int maxSum = INT_MIN;
    int maxPathSum(TreeNode* root){
        maxSumHelper(root);
        return maxSum;
    }
    int maxSumHelper(TreeNode* root){
        if(root == NULL)
            return 0;
        int sum = 0;
        int leftSum = max(maxSumHelper(root->left),0);
        int rightSum = max(maxSumHelper(root->right),0);
        // key sum

        int rootSum = leftSum + rightSum + root->val;
        maxSum = max(maxSum, rootSum);
        return root->val + max(leftSum, rightSum);
    }

};

int main(){
    TreeNode *root = new TreeNode(-10);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    // root->left->left = new TreeNode(1);
    // root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    TreeNodeUtil treeNodeUtil;
    int ans = treeNodeUtil.maxPathSum(root);
    cout<<ans;
}