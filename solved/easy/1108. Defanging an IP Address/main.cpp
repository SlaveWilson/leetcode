#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
  string defangIPaddr(string address)
  {
    size_t start_pos = 0;
    string from = ".";
    string to = "[.]";
    while ((start_pos = address.find(from, start_pos)) != string::npos)
    {
      address.replace(start_pos, from.length(), to);
      start_pos += to.length();
    }

    return address;
  }
};

int main()
{
  string address = "1.1.1.1";

  Solution solution;
  const string output = solution.defangIPaddr(address);
  cout << output;

  cout << endl;
}