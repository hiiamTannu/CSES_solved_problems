/*Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.

Input

The only input line contains an integer n.

Output

Print a line that contains all values of n during the algorithm.

Constraints
1≤n≤106
Example

Input:
3

Output:
3 10 5 16 8 4 2 1

problem Link:
https://cses.fi/problemset/task/1068
*/


#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long int arr[n];
	unordered_map<long int,long int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
	}
	cout<<mp.size();
	return 0;
}
