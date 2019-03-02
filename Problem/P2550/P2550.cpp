#include <iostream>
#include <cstdio>
using namespace std;
int n;
int s[10];
int in[10];
int win[10];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=7;i++)
		scanf("%d",&s[i]);
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int i=1;i<=7;i++)
			scanf("%d",&in[i]);
		for(int i=1;i<=7;i++)
			for(int o=1;o<=7;o++)
				if(s[i]==in[o])
					sum++;
		win[sum]++;
	}
	for(int i=7;i>=1;i--)
		cout<<win[i]<<" ";
	return 0;
}