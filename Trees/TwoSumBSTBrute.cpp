#include<bits/stdc++.h>

using namespace std;

// 1. Define the TreeNode structure (LeetCode provides this behind the scenes)
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// 2. Paste your Solution class here
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& arr) {
        if (root == NULL) return;
        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inorder(root, arr);
        int i = 0;
        int j = arr.size() - 1;
        while (i < j) {
            int sum = arr[i] + arr[j];
            if (sum == k) return true;
            if (sum < k) i++;
            else j--;
        }
        return false;
    }
};

// 3. Helper function to insert nodes and build a BST
TreeNode* insertBST(TreeNode* root, int val) {
    if (root == nullptr) return new TreeNode(val);
    if (val < root->val) {
        root->left = insertBST(root->left, val);
    } else {
        root->right = insertBST(root->right, val);
    }
    return root;
}

// 4. Main function to handle inputs and test the logic
int main() {
    // Example Input: [5, 3, 6, 2, 4, null, 7]
    TreeNode* root = nullptr;
    root = insertBST(root, 5);
    insertBST(root, 3);
    insertBST(root, 6);
    insertBST(root, 2);
    insertBST(root, 4);
    insertBST(root, 7);

    int k = 9; // Target sum

    Solution obj;
    bool result = obj.findTarget(root, k);

    if (result) {
        cout << "Target " << k << " found in the BST!" << endl;
    } else {
        cout << "Target " << k << " NOT found." << endl;
    }

    return 0;
}