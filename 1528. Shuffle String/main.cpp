#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  string restoreString(string s, vector<int> &indices)
  {
    string output = s;
    for (int i = 0; i < indices.size(); i++)
    {
      output[indices[i]] = s[i];
    }
    return output;
  }
};

int main()
{
  string s = "codeleet";
  vector<int> indices{4, 5, 6, 7, 0, 2, 1, 3};

  Solution sol;
  string output = sol.restoreString(s, indices);
  cout << output << endl;
}