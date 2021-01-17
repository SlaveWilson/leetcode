#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int maximumWealth(vector<vector<int>> &accounts)
  {
    int result = 0;
    int wealth = 0;

    for (int i = 0; i < accounts.size(); i++)
    {
      wealth = 0;
      for (int j = 0; j < accounts[i].size(); j++)
      {
        wealth += accounts[i][j];
      }
      if (wealth > result)
        result = wealth;
    }

    return result;
  }
};

int main()
{
  vector<vector<int>> accounts{
      {1, 5}, {7, 3}, {3, 5}};
  Solution sol;
  int output = sol.maximumWealth(accounts);
  cout << output << endl;
}