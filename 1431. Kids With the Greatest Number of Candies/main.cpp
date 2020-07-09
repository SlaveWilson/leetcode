#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
  {
    int highest = 0;
    for (int i = 0; i < candies.size(); i++)
    {
      if(candies[i] > highest) highest = candies[i];
    }

    vector<bool> result;
    for (int i = 0; i < candies.size(); i++)
    {
      result.push_back(candies[i] + extraCandies >= highest);
    }
    
    return result;
  }
};

int main()
{
  vector<int> input{2, 3, 5, 1, 3};

  Solution solution;
  const vector<bool> output = solution.kidsWithCandies(input, 3);
  for (int i = 0; i < output.size(); i++)
    cout << output[i] << " ";

  cout << endl;
}