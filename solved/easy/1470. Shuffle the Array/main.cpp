#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> shuffle(vector<int> &nums, int n)
  {
    vector<int> result;
    for (int i = 0; i < nums.size() / 2; i++)
    {
      result.push_back(nums[i]);
      result.push_back(nums[i + n]);
    }

    return result;
  }
};

int main()
{

  vector<int> input{2, 5, 1, 3, 4, 7};

  Solution solution;
  const vector<int> output = solution.shuffle(input, 3);
  for (auto &i : output)
    cout << i << " ";

  cout << endl;
}