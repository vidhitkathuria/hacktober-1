/*Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

 

Example 1:

Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.
 

Example 2:

Input:
N = 4, K = 3
arr[] = {5,6,8,9}
Output: 8 6 5 9
 

Your Task:
You don't need to read input or print anything. The task is to complete the function reverseInGroups() which takes the array, N and K as input parameters and modifies the array in-place. 

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

 

Constraints:
1 ≤ N, K ≤ 107
1 ≤ A[i] ≤ 1018 */

#include <iostream>
using namespace std;
 
// Function to reverse every sub-array formed by
// consecutive k elements
void reverse(int arr[], int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int left = i;
 
        // to handle case when k is not multiple of n
        int right = min(i + k - 1, n - 1);
 
        // reverse the sub-array [left, right]
        while (left < right)
            swap(arr[left++], arr[right--]);
 
    }
}
 
// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    reverse(arr, n, k);
 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}
