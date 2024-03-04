#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Hàm thêm một giá trị vào cây nhị phân
TreeNode* ThemVaoCay(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }
    if (val < root->data) {
        root->left = ThemVaoCay(root->left, val);
    } else {
        root->right = ThemVaoCay(root->right, val);
    }
    return root;
}

// Hàm vẽ cây nhị phân
void VeCay(TreeNode* root, int space) {
    if (root == nullptr) {
        return;
    }
    space += 10;
    VeCay(root->right, space);
    cout << endl;
    for (int i = 10; i < space; i++) {
        cout << " ";
    }
    cout << root->data << endl;
    VeCay(root->left, space);
}

int main() {
    int arr[] = {40, 5, 35, 45, 15, 56, 48, 13, 16, 49, 47};
    int n = sizeof(arr) / sizeof(arr[0]);

    TreeNode* root = nullptr;

    for (int i = 0; i < n; i++) {
        root = ThemVaoCay(root, arr[i]);
    }

    cout << "Cay nhi phan tim kiem voi cac gia tri cho truoc:" << endl;
    VeCay(root, 0);

    return 0;
}
