// https://leetcode.com/problems/longest-continuous-increasing-subsequence/
#include "iostream"
#include "vector"
using namespace std;
int main()
{
  vector<int> nums = {2, 2, 2, 2, 2};
  int n = nums.size();
  int c = 1, ans = 1;
  for (int i = 0; i < n - 1; i++)
  {
    if (nums[i] < nums[i + 1])
    {
      c++;
      ans = max(ans, c);
    }
    else
      c = 1;
  }
  cout << "the ans is " << ans;
}