#include<iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int max1=1,max2=1;
	for(int i=1;i<str.length();i++)
	{
		if(str[i-1]==str[i])
		{
			max2++;
			if(max2>max1)
				max1=max2;
		}
		else
			max2=1;
	}
	cout<<max1;
	return 0;
}
