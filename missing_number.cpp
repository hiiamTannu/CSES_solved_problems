/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4

Problem Link:
https://cses.fi/problemset/task/1083
*/

#include<iostream>
using namespace std;
int missingNo(long int arr[], long int n)
{
	long int sumN=0,sum;
	for(int i=0;i<n-1;i++)
		sumN+=arr[i];
	sum=n*(n+1)/2;
	return sum-sumN;
}
int main()
{
	long int n;
	cin>>n;
	long int arr[n-1];
	for(int i=0;i<n-1;i++)
		cin>>arr[i];
	cout<<missingNo(arr,n);
	return 0;
}
