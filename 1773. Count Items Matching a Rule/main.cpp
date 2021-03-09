#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
  {
    int count = 0;
    int type = ruleKey == "type" ? 0 : (ruleKey == "color" ? 1 : 2);
    for (vector<string> item : items)
    {
      if (item[type] == ruleValue)
        count++;
    }
    return count;
  }
};

int main()
{
  vector<vector<string>> items{{"phone", "blue", "pixel"},
                               {"computer", "silver", "lenovo"},
                               {"phone", "gold", "iphone"}};
  string ruleKey = "color";
  string ruleValue = "silver";
  Solution sol;
  int output = sol.countMatches(items, ruleKey, ruleValue);
  cout << output << endl;
}