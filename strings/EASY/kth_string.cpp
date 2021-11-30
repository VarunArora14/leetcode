#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  vector<string> arr = {"d", "b", "c", "b", "c", "a"}, out = {};
  // a b b c c d
  sort(arr.begin(), arr.end());
  int k = 2, flag = 0;
  int size = arr.size();
  string check;
  int i, j;
  for (i = 0; i < size; i++)
  {
    check = arr[i];
    flag = 0;
    for (j = i + 1; j < size; j++)
    {
      if (check.compare(arr[j]) == 0)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
    }
  }
}
