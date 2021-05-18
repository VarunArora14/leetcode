//  https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1
/*
Example 1:

Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
Example 2:

Input:
N = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.

Your Task:
The task is to complete the function rearrange() which rearranges elements as explained above. Printing of the modified array will be handled by driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 107
1 <= arr[i] <= 10
*/
#include <iostream>
using namespace std;
int main()
{
	int n,i,large,small;
	cin>>n;
	int a[n];
	for( i=0;i<n;i++)
	{
		cin>>a[i];
	}

large=a[n-1];
small=a[0];
for (int i = 0; i < n; ++i)
{
	/* code */
	if(i%2==0)
	{
		a[i]=large;
		large--;

	}
	else{
		a[i]=small;
		small++;
	}
}
for (int i = 0; i < n; ++i)
{
	cout<<a[i]<<" ";
}
}