#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int sumOddLengthSubarrays(vector<int> &arr)
  {
    int result = 0;
    for (int i = 1; i <= arr.size(); i += 2)
    {
      int current = 0;
      while (current <= arr.size() - i)
      {
        for (int j = current; j < current + i; j++)
        {
          result += arr[j];
        }
        current++;
      }
    }
    return result;
  }
};

int main()
{
  vector<int> arr{1, 4, 2, 5, 3};
  Solution sol;
  int output = sol.sumOddLengthSubarrays(arr);
  cout << output << endl;
}