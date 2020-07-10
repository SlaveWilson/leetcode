#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  int getDecimalValue(ListNode *head)
  {
    vector<int> binary;
    binary.push_back(head->val);
    ListNode *current = head;

    while (current->next)
    {
      binary.push_back(current->next->val);
      current = current->next;
    }

    int n = binary.size();
    int power = 0;
    int value = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      value += binary[i] * pow(2, power);
      power++;
    }

    return value;
  }
};

int main()
{
  // [1,0,1]
  ListNode three;
  three.val = 1;
  ListNode two;
  two.next = &three;
  two.val = 0;
  ListNode head;
  head.next = &two;
  head.val = 1;

  Solution solution;
  int output = solution.getDecimalValue(&head);

  cout << output << endl;
}