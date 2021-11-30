// https://leetcode.com/problems/shuffle-string/
// EASY
#include "iostream"
#include "vector"
#include "string"
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  int i;
  vector<int> indices(n);
  for (i = 0; i < n; i++)
  {
    cin >> indices[i];
  }

  string s = "", finalString = "";
  char ans[100];
  cin >> s;
  for (i = 0; i < n; i++)
  {
    ans[indices[i]] = s[i];
  }
  for (i = 0; i < n; i++)
  {
    finalString.push_back(ans[i]);
  }
  cout << finalString;
}

// Or you can simply do
/*
string restoreString(string s, vector<int>& indices) {
        string res = s;
        for(int i =0; i < indices.size(); ++i)
            res[indices[i]] = s[i];
        return res;
    }
*/