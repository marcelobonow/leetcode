struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int val) : val(val)
  {
  }
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};