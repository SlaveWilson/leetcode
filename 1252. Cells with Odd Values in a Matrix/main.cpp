#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int oddCells(int n, int m, vector<vector<int>> &indices)
  {
    return 0;
  }
};

int main()
{
  int n = 2, m = 3;
  vector<vector<int>> indices{{0, 1}, {1, 1}};
  Solution sol;
  int output = sol.oddCells(n, m, indices);
  cout << output << endl;
}