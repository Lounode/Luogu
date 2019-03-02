#include <iostream>
#include <cstdio>
using namespace std;
int m,n;
int s[10];
int main ()
{
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		int y=i;
		while(y)
		{
			s[y%10]++;
			y/=10;
		}
	}
	for(int i=0;i<=9;i++)
		cout<<s[i]<<" ";
	return 0;
}