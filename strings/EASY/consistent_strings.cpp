// https://leetcode.com/problems/count-the-number-of-consistent-strings/
// EASY
// SOL - https://leetcode.com/problems/count-the-number-of-consistent-strings/discuss/970028/C%2B%2B-Linear-Fastest-Solution-100-Time-100-Space
#include "iostream"
#include "vector"
using namespace std;

int main()
{
  string a, b;
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  vector<string> words = {"baaaa",
                          "cab"};
  string allowed = "ab";
  int res = words.size();
  // length of vector

  // Now, we have to find how many of these words have same characters as 'allowed' string
  // For that -
  // 1. Strings can be of any size but must have each character of allowed string
  // 2. Even if 1 character of allowed not there, it does not count
  // 3. Unordered characters but check only availability

  // Traverse each word in words and check if it has all occurences of each character
  // For that create a bool array either of 26 like - bool alpha[26]={} - default false all elements
  // or bool alpha[123]={} ('a' to 'z' is 97 to 122)
  // Note that in first we have to change the ascii like alpha[c-'a'] where c is a character
  // let's say c='x'(120) then alpha['x'-'a']=alpha[120-97]=alpha[23] (alpha is from 0 to 25)

  bool alpha[123] = {};
  // Now populate alpha
  for (char c : allowed)
    alpha[c] = true;
  // check each word
  for (string word : words)
  {
    for (char c : word)
    {
      // check if alpha[c] false
      if (!alpha[c])
      {
        res--;
        break;
        // If one letter from words does not match allowed letter then break, we want all same
      }
    }
  }
  cout << res;
  return 0;
}