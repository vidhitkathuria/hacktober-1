/*Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

 

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.
 

Example 2:

Input:
n = 5
A[] = {1,2,3,4,0}
Output: 4 0
 

Your Task:
You don't need to read input or print anything. The task is to complete the function leader() which takes array A and n as input parameters and returns an array of leaders in order of their appearance.

 

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

 

Constraints:
1 <= n <= 107
0 <= Ai <= 107 */


// C++ implementation of the approach
#include<bits/stdc++.h> 
using namespace std; 

// Function to return the maximum
// water that can be stored
int maxWater(int arr[], int n) 
{
    
    // To store the maximum water 
    // that can be stored
    int res = 0;
    
    // For every element of the array
    for (int i = 1; i < n-1; i++) {
        
        // Find the maximum element on its left
        int left = arr[i];
        for (int j=0; j<i; j++)
           left = max(left, arr[j]);
        
        // Find the maximum element on its right   
        int right = arr[i];
        for (int j=i+1; j<n; j++)
           right = max(right, arr[j]); 
       
       // Update the maximum water    
       res = res + (min(left, right) - arr[i]);   
    }

    return res; 
} 

// Driver code
int main() 
{ 
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    cout << maxWater(arr, n); 
    
    return 0; 
}

