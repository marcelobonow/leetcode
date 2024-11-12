#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    unordered_map<char, int> umap;
    int maxLength = 0;
    int left = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (umap.find(s[i]) != umap.end())
      {
        /// we know that no other letter is duplicated
        /// between the first occurrence until "i", so we start one place after
        left = max(left, umap[s[i]] + 1);
      }

      maxLength = max(maxLength, i - left + 1);
      umap[s[i]] = i;
    }

    return maxLength;
  }
};