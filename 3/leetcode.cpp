#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    /// As the problem says that only ascii caracteres will be used, we can make this memory optimization
    // unordered_map<char, int> positions;
    int positions[256] = {0};
    int maxLength = 0;
    int left = 0;
    if (s.length() == 0)
      return 0;

    for (int i = 0; i < s.length(); i++)
    {
      if (positions[s[i]] > left)
      {
        /// we know that no other letter is duplicated
        /// between the first occurrence until "i", so we start one place after
        left = max(left, positions[s[i]]);
      }

      maxLength = max(maxLength, i - left + 1);
      positions[s[i]] = i + 1;
    }

    return maxLength;
  }
};