#include "leetcode.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  auto solution = new Solution();

  auto l1 = new ListNode(9);
  l1->next = new ListNode(9);
  auto l2 = new ListNode(9);

  auto result = solution->addTwoNumbers(l1, l2);

  for (auto pointer = result; pointer != NULL; pointer = pointer->next)
    cout << pointer->val << " ";

  cout << endl;
}