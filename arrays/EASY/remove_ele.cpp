#include "iostream"
// EASY
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int a[] = {0, 1, 2, 2, 3, 0, 4, 2};
  int val;
  cin >> val;
  int len = sizeof(a) / sizeof(a[0]);
  int k = 0;
  // k is total elements - occurences
  for (int i = 0; i < len; i++)
  {
    if (a[i] == val)
    {
      k++;
    }
    else
    {
      a[i - k] = a[i];
    }
  }
  cout << "elements are " << len - k << "\n";
  // Check whether len-k elements are in correct order or not

  for (int i = 0; i < len; i++)
  {
    cout << a[i] << " ";
  }
}