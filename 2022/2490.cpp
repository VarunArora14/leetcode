#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <stack>
#include <string>
#include <climits>

#define print1(x) cout << #x << '=' << x << endl
#define print2(x, y) cout << #x << '=' << x << ',' << #y << '=' << y << endl
#define nline cout << endl
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; i < n; i++)
#define pb push_back
#define sz(x) ((long long)(x).size())
#define ppb pop_back
#define ff first
#define ss second

using namespace std;

using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;
using l = long;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long, long>;
using vpii = vector<pair<int, int>>;

const int mod = 1000000007;
int maxval = INT_MIN, minval = INT_MAX;

bool isCircularSentence(string s)
{

  vector<string> vec;
  int i = 0;
  while (i < s.length())
  {
    string curr = "";
    while (s[i] != ' ' && i < s.length())
    {
      curr += s[i];
      i++;
    }
    if (curr != "")
      vec.push_back(curr);
    i++;
  }

  if (vec.size() <= 1)
    return true;

  for (int i = 0; i < vec.size() - 1; i++)
  {
    string f = vec[i];
    string n = vec[i + 1];
    if (f[f.length() - 1] != n[0])
      return false;
  }
  return true;
}

int main()
{
  cout << isCircularSentence("eetcode");
  return 0;
}