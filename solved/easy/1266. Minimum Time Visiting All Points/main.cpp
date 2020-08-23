#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int minTimeToVisitAllPoints(vector<vector<int>> &points)
  {
    int result = 0;
    vector<int> current;
    for (auto point : points)
    {
      if (current.empty())
      {
        current = point;
        continue;
      }

      // diagonal
      int diff_x = abs(point[0] - current[0]);
      int diff_y = abs(point[1] - current[1]);
      int diagonal = diff_x > diff_y ? diff_y : diff_x;

      current = point;
      result += diagonal + abs(diff_y - diff_x);
    }
    return result;
  }
};

int main()
{
  vector<vector<int>> points{{1, 1}, {3, 4}, {-1, 0}};
  Solution solution;
  int output = solution.minTimeToVisitAllPoints(points);

  cout << output << endl;
}