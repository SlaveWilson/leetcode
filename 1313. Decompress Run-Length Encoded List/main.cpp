#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> decompressRLElist(vector<int> &nums)
  {
    vector<int> result;
    for (size_t i = 0; i < nums.size(); i += 2)
      for (size_t j = 0; j < nums[i]; j++)
        result.push_back(nums[i + 1]);

    return result;
  }
};

int main()
{
  vector<int> nums{1, 2, 3, 4};
  Solution solution;
  vector<int> output = solution.decompressRLElist(nums);

  for (auto i : output)
    cout << i << " ";
  cout << endl;
}