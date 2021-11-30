// https://leetcode.com/problems/richest-customer-wealth/
// EASY
#include "iostream"
#include "vector"
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  vector<vector<int>> accounts{
      {2, 8, 7},
      {7, 1, 3},
      {1, 9, 5},
  };
  int i, j;
  int prevsum = 0, newsum = 0;
  for (i = 0; i < accounts.size(); i++)
  {
    for (j = 0; j < accounts[i].size(); j++)
    {
      newsum += accounts[i][j];
    }
    if (prevsum < newsum)
    {
      prevsum = newsum;
    }
    newsum = 0;
  }
  cout << prevsum;
}