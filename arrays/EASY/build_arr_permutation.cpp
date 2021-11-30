// https://leetcode.com/problems/build-array-from-permutation/
// EASY
#include <iostream>
#include <vector>
using namespace std;

void buildArray(vector<int> &nums)
{
  vector<int> ans;

  for (int i = 0; i < nums.size(); i++)
  {
    ans.push_back(nums[nums[i]]);
  }
  for (int i = 0; i < nums.size(); i++)
  {
    cout << ans[i] << " ";
  }
}

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  vector<int> nums{0, 2, 1, 5, 3, 4};
  int n, a;
  // for (int i = 0; i < nums.size(); i++)
  // {
  //   cout << nums[i] << " ";
  // }
  buildArray(nums);
}