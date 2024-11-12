#include <iostream>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    unordered_map<char, int> umap;
    int maxLength = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (umap.find(s[i]) != umap.end())
      {
        if (umap.size() > maxLength)
          maxLength = umap.size();

        i = umap.at(s[i]);
        umap.clear();
      }
      else
        umap[s[i]] = i;
    }
    if (umap.size() > maxLength)
      maxLength = umap.size();

    return maxLength;
  }
};