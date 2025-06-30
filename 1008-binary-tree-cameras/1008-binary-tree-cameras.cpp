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
private:
    int cameraCount = 0;

    const int NEEDS_CAMERA = 0;
    const int HAS_CAMERA = 1;
    const int COVERED = 2;
    const int NOT_NEEDED = 3;

    int getCameraStatus(TreeNode* root) {
        if (root == nullptr) return NOT_NEEDED;

        // leaf node
        if (root->left == nullptr && root->right == nullptr)
            return NEEDS_CAMERA;

        int leftStatus = getCameraStatus(root->left);
        int rightStatus = getCameraStatus(root->right);

        if (leftStatus == NEEDS_CAMERA || rightStatus == NEEDS_CAMERA) {
            cameraCount++;
            return HAS_CAMERA;
        }

        if (leftStatus == HAS_CAMERA || rightStatus == HAS_CAMERA) {
            return COVERED;
        }

        return NEEDS_CAMERA;
    }

public:
    int minCameraCover(TreeNode* root) {
        if (getCameraStatus(root) == NEEDS_CAMERA) {
            cameraCount++;
        }
        return cameraCount;
    }
};