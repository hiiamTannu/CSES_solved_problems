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
