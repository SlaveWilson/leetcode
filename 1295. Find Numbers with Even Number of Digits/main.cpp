#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
  int findNumbers(vector<int> &nums)
  {
    int count = 0;
    for (auto i : nums)
    {
      string num = to_string(i);
      if ((num.length() & 1) == 0)
        count++;
    }
    return count;
  }
};

int main()
{
  vector<int> nums{12, 345, 2, 6, 7896};
  Solution solution;
  int output = solution.findNumbers(nums);

  cout << output << endl;
}