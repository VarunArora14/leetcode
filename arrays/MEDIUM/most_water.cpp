// MEDIUM
// https://leetcode.com/problems/container-with-most-water/

// Here move from i=0 to last height bcos with each height, area under it increases, so we can run a max()
#include <iostream>
using namespace std;

// brute force solution implemented by n^2 where we go all on for each height
int brute(int h[], int n)
{
  int i, max_area = 0, final_area = 0, j;
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      max_area = max(max_area, (j - i) * min(h[i], h[j]));
    }
  }
  return max_area;
}

// optimisation done by fact that for first height, we can get by going to last height that is (i+1)*n or 1*n
// then we can see if we increase i the area increases or decreases, if it increases then try again
// also if it does not then check by reducing n as n--. Keep storing the max value

// have start and end pointers, have max_area
// max_area = max(max_area, (n-i)*min(h[i], h[n])) -> 1
// now, we need condition to move forward and a problem that if 2 really large heights come in between like [1,2,99,100,4] then area btw [99,100] is 99
// for that since we are starting at i=0 and n = size-1, we will increase i if height[i]<h (where h = min(height[i],height[j])) bcos the smaller height is
// the limting factor for the volume, else height[n++] inside while loop with condition i<n and first statement(1).

int optimal(int h[], int n)
{
  int i, max_area = 0, final_area = 0, j;
  i = 0;
  j = n - 1; // length of h[]

  // i and j must have difference of 1 as 2 h[i] must not have same position i for area, bcos for area we need breadth
  // which comes through distance btw 2 h
  while (i < j)
  {
    int height = min(h[i], h[j]);
    max_area = max(max_area, (j - i) * height);
    cout << "max area is " << max_area << "\n";
    // Now, since the area is dependent on height which is smaller

    // not h[i]<h[j] bcos we compare to the minimum value and not the other value only
    // while (h[i] <= height && i < j)
    //   i++;
    if (h[i] <= h[j])
      i++;
    // do not put the if condition, but use the else if bcos when we do i++, then h[i] changes, and then we compare it to new h[i] and not old one
    else if (h[j] < h[i])
      j--;
    // we try to find a larger height to find larger area
  }
  return max_area;
}
int main()
{
  int h[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int n = sizeof(h) / sizeof(h[0]);
  // cout << brute(h, n) << "\n";
  cout << optimal(h, n);
  return 0;
}