#include <iostream>
using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
  int rangeSumBST(TreeNode *root, int L, int R)
  {
    if (!root->left && !root->right)
    {
      if (root->val < L || root->val > R)
        return 0;
      else
        return root->val;
    }

    int left = 0, right = 0, val = 0;

    if (root->left)
      left = rangeSumBST(root->left, L, R);

    if (root->right)
      right = rangeSumBST(root->right, L, R);

    if (root->val >= L && root->val <= R)
      val = root->val;

    return left + right + val;
  }
};

int main()
{
}
