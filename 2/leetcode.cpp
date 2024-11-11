#include "ListNode.cpp"
#include <iostream>
using namespace std;

#include <cmath>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *resultStart = new ListNode();
    auto currentResult = resultStart;

    int carryOver = 0;

    while (l1 != NULL && l2 != NULL)
    {
      int sum = carryOver + l1->val + l2->val;
      carryOver = sum / 10;
      currentResult->next = new ListNode(sum % 10);
      currentResult = currentResult->next;

      l1 = l1->next;
      l2 = l2->next;
    }

    while (l1 != NULL)
    {
      int sum = carryOver + l1->val;
      carryOver = sum / 10;
      currentResult->next = new ListNode(sum % 10);
      currentResult = currentResult->next;

      l1 = l1->next;
    }

    while (l2 != NULL)
    {
      int sum = carryOver + l2->val;
      carryOver = sum / 10;
      currentResult->next = new ListNode(sum % 10);
      currentResult = currentResult->next;

      l2 = l2->next;
    }

    if (carryOver != 0)
      currentResult->next = new ListNode(carryOver);

    return resultStart->next;
  }
};
