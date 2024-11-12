#include "leetcode.cpp"
#include <iostream>
#include <vector>

using namespace std;

string verifyCorrect(int result, int expected)
{
  return result == expected ? "acertou" : "errou, deu " + to_string(result) + ".";
}

int main()
{
  auto solution = new Solution();

  auto result = solution->lengthOfLongestSubstring("abcabcbb");

  cout << verifyCorrect(result, 3) << "1" << endl;
  cout << verifyCorrect(solution->lengthOfLongestSubstring("bbbbb"), 1) << "2" << endl;
  cout << verifyCorrect(solution->lengthOfLongestSubstring("pwwkew"), 3) << "3" << endl;
  cout << verifyCorrect(solution->lengthOfLongestSubstring(" "), 1) << "4" << endl;
  cout << verifyCorrect(solution->lengthOfLongestSubstring("au"), 2) << "5" << endl;
  cout << verifyCorrect(solution->lengthOfLongestSubstring("aab"), 2) << "6" << endl;
}
