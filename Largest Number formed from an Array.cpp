/*Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.


Example 1:

Input: 
N = 5
Arr[] = {3, 30, 34, 5, 9}
Output: 9534330
Explanation: Given numbers are {3, 30, 34,
5, 9}, the arrangement 9534330 gives the
largest value.
Example 2:

Input: 
N = 4
Arr[] = {54, 546, 548, 60}
Output: 6054854654
Explanation: Given numbers are {54, 546,
548, 60}, the arrangement 6054854654 
gives the largest value.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function printLargest() which takes the array of strings arr[] as parameter and returns a string denoting the answer.

Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 105
0 ≤ Arr[i] ≤ 1018
Sum of all the elements of the array is greater than 0. 
*/

// Given an array of numbers,
// program to arrange the numbers
// to form the largest number
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// A comparison function which
// is used by sort() in
// printLargest()
int myCompare(string X, string Y)
{
	// first append Y at the end of X
	string XY = X.append(Y);

	// then append X at the end of Y
	string YX = Y.append(X);

	// Now see which of the two
	// formed numbers is greater
	return XY.compare(YX) > 0 ? 1 : 0;
}

// The main function that prints
// the arrangement with the
// largest value. The function
// accepts a vector of strings
void printLargest(vector<string> arr)
{
	
	// Sort the numbers using
	// library sort function. The
	// function uses our comparison
	// function myCompare() to
	// compare two strings. See
	// http://www.cplusplus.com/reference/
	// algorithm/sort/
	// for details
	sort(arr.begin(), arr.end(), myCompare);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i];
}

// Driver code
int main()
{
	vector<string> arr;

	// output should be 6054854654
	arr.push_back("54");
	arr.push_back("546");
	arr.push_back("548");
	arr.push_back("60");
	printLargest(arr);

	return 0;
}


