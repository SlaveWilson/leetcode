#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> decode(vector<int> &encoded, int first)
  {
    vector<int> result;
    result.push_back(first);

    int next = first;
    for (int i : encoded)
    {
      next ^= i;
      result.push_back(next);
    }

    return result;
  }
};

int main()
{
  vector<int> encoded{6, 2, 7, 3};
  int first = 4;
  Solution sol;
  vector<int> result = sol.decode(encoded, first);
  for (int i : result)
    cout << i << endl;
}