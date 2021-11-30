// https://leetcode.com/problems/concatenation-of-array/
// EASY
#include "iostream"
using namespace std;

int main()
{

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n, nums[1000];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }
  int ans[2000];

  for (int i = 0; i < n; i++)
  {
    if (i < n)
    {
      ans[i] = nums[i];
      ans[i + n] = nums[i];
    }
  }

  for (int i = 0; i < 2 * n; i++)
  {
    cout << ans[i] << " ";
  }
}