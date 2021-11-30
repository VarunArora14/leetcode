// https://leetcode.com/problems/move-zeroes/
#include "iostream"
#include "vector"
using namespace std;
int main()
{
  vector<int> nums = {0, 1, 0, 3, 12};
  int n = nums.size();
  int i, c = 0;
  for (i = 0; i < n; i++)
  {
    if (nums[i] != 0)
    {
      nums[c++] = nums[i];
      // here the worst it can happen is all nums[i] are non-zero bcos of which still the nums[c++]=nums[i] will return the same array
    }
  }
  while (c != n)
  {
    nums[c++] = 0;
  }
  for (auto j : nums)
  {
    cout << j << " ";
  }
  return 0;
}
