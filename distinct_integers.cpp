


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
