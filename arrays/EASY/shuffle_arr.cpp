// https://leetcode.com/problems/shuffle-the-array/
// EASY
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  vector<int> a(2 * n), ans(2 * n);
  for (int i = 0; i < 2 * n; i++)
  {
    cin >> a[i];
  }
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    ans[c++] = a[i];
    ans[c++] = a[i + n];
  }
  for (auto i = 0; i < 2 * n; i++)
  {
    cout << ans[i] << " ";
  }
}