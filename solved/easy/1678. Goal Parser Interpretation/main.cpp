#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  string interpret(string command)
  {
    string result;
    string G = "G";
    string o = "()";
    string al = "(al)";

    string word;
    for (char c : command)
    {
      word.push_back(c);

      if (word == G)
      {
        result += "G";
        word = "";
      }
      else if (word == o)
      {
        result += "o";
        word = "";
      }
      else if (word == al)
      {
        result += "al";
        word = "";
      }
    }

    return result;
  }
};

int main()
{
  string command = "G()()()()(al)";
  Solution sol;
  string output = sol.interpret(command);
  cout << output << endl;
}