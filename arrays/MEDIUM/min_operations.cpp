// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
int main()
{
  string boxes = "001011";
  int i, j;
  int len = boxes.length();
  int count = 0;
  vector<int> ans(len);
  for (i = 0; i < len; i++)
  {
    count = 0;
    for (j = 0; j < len; j++)
    {
      if (boxes[j] == '1')
      {
        count += abs(i - j);
      }
    }
    ans[i] = count;
  }

  // print ans
  for (auto x : ans)
    cout << x << " ";
}
// Time - O(n^2), space O(n)

/* leetcode solution - O(n) both
  vector<int> minOperations(string boxes) {
    vector<int> res(boxes.length()); 
    for (int i = 0, ops = 0, cnt = 0; i < boxes.length(); ++i) {
       res[i] += ops;
       cnt += boxes[i] == '1' ? 1 : 0;
       ops += cnt;
    }
    for (int i = boxes.length() - 1, ops = 0, cnt = 0; i >= 0; --i) {
        res[i] += ops;
        cnt += boxes[i] == '1' ? 1 : 0;
        ops += cnt;
    }
    return res;
}
*/
