#include "leetcode.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  cout << "Leetcode!" << endl;
  auto solution = new Solution();
  vector<int> input{1, 6142, 8192, 10239};
  auto result = solution->twoSum(input, 18431);
  for (int x : result)
    cout << x << " ";
}