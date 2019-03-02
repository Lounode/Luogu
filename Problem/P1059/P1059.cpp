#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
bool s[1100000];
int main ()
{
	int n,a,maxa=0,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(!s[a])
		sum++;
		s[a]=true;
		
		
		maxa=max(a,maxa);
	}
	//cout<<maxa<<"\n";
	cout<<sum<<"\n";
	for(int i=0;i<=maxa;i++)
	{
		if(s[i])
		cout<<i<<" ";
	}
	return 0;
}
