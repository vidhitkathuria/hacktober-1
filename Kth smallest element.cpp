
/*Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
Example 2:

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given 
array is 15.
Your Task:
You don't have to read input or print anything. Your task is to complete the function kthSmallest() which takes the array arr[], integers l and r denoting the starting and ending index of the array and an integer K as input and returns the Kth smallest element.
 
 
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N 
*/

// Simple C++ program to find k'th smallest element
#include <algorithm>
#include <iostream>
using namespace std;

// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n, int k)
{
	// Sort the given array
	sort(arr, arr + n);

	// Return k'th element in the sorted array
	return arr[k - 1];
}

// Driver program to test above methods
int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]), k = 2;
	cout << "K'th smallest element is " << kthSmallest(arr, n, k);
	return 0;
}

