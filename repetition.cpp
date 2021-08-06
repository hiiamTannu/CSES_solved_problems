/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3

Problem Link:
https://cses.fi/problemset/task/1069

*/

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
