#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime)
  {
    int count = 0;
    for (int i = 0; i < startTime.size(); i++)
    {
      if (queryTime >= startTime[i] && queryTime <= endTime[i])
        count++;
    }
    return count;
  }
};

int main()
{
  vector<int> startTime{1, 2, 3};
  vector<int> endTime{3, 2, 7};
  int queryTime = 4;

  Solution solution;
  int output = solution.busyStudent(startTime, endTime, queryTime);
  cout << output << endl;
}