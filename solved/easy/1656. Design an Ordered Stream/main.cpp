#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

class OrderedStream
{
private:
  vector<string> stream;
  int ptr = 0;
  int size;

public:
  OrderedStream(int n)
  {
    size = n;
    for (int i = 0; i < n; i++)
    {
      stream.push_back("");
    }
  }

  vector<string> insert(int id, string value)
  {
    stream[id - 1] = value;
    vector<string> result{};
    for (int i = ptr; i < size; i++)
    {
      if (stream[i] == "")
      {
        ptr = i;
        break;
      }
      else
      {
        result.push_back(stream[i]);
      }
    }

    return result;
  }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */

int main()
{
  OrderedStream *obj = new OrderedStream(5);
  vector<string> param_1 = obj->insert(3, "ccccc");
  vector<string> param_2 = obj->insert(1, "aaaaa");
  copy(param_2.begin(), param_2.end(), ostream_iterator<string>(cout, " "));
  vector<string> param_3 = obj->insert(2, "bbbbb");
  vector<string> param_4 = obj->insert(5, "eeeee");
  vector<string> param_5 = obj->insert(4, "ddddd");
}