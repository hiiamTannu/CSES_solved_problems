#include<iostream>
using namespace std;
void weird(long int n)
{
	if(n==1)
	{
		cout<<"1";
		return;
	}
	cout<<n<<" ";
	if(n%2==0)
		return weird(n/2);
	else
		return weird(n*3+1);
}
int main()
{
	long int n;
	cin>>n;
	weird(n);
	return 0;
}
