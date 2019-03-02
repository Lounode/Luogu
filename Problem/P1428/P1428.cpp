#include <iostream>
#include <cstdio>
using namespace std;
int a[101]={1000000},b[101];
int main ()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
		for(int p=i-1;p>=0;p--)
		{
			if(a[i]>a[p])
				b[i]++;
		}
	
	
	for(int j=1;j<=n;j++)
	{
		cout<<b[j]<<" ";
	}	
	return 0;
}
