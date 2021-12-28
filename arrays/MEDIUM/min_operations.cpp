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
        int n=boxes.length();
        vector<int>res(n);
        int last_cost=0, sum=boxes[0]-'0';
        for(int i=1;i<n;i++){
            res[i]+=sum+last_cost;
            last_cost=res[i];
            sum+=(boxes[i]-'0');
        }
        
        last_cost=0,sum=boxes[n-1]-'0';
        
        for(int i=n-2;i>=0;i--){
            res[i]+=sum+last_cost;
            last_cost=(sum+last_cost);
            sum+=(boxes[i]-'0');
        }
        return res;
    }
*/

/*

Here what we are doing is going through the array first from left to right and then right to left and for each position we are storing a prefix array
sum[] which stores the total balls to be moved from 0th index to current ith index (ie. all elements to left), in a variable (here sum) and res stores 
the operations needed to move all balls to ith index. Thus, res[i]= res[i-1]+ sum, gives minimum number of operations needed to move all balls from the 
left indices.

Similarily, we need to iterate from right to left and storing total balls in a variable (sum) and using it to find res[i], which is res[i]=res[i-1]+sum.

For a given position i, for finding the cost to move balls from all places it makes sense we see the cost from 0 to i and then n-1 to i in backward
direction rather than running an n^2 loop and here we get O(n) time.

Time Complexity : O(N) due to the linear traversal from 1st element to last element & vice versa
Space Complexity: O(N) due to the space used to store the prefix sum and ultimately the result.
*/