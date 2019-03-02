#include <iostream>
#include <cstdio>
using namespace std;
int f[100000];
int n;
int main ()
{
	scanf("%d",&n);
	f[0]=1;
	f[1]=1;
	for(int i=2;i<=n;i++)
		for(int o=0;o<=n;o++)
			f[i]+=f[o]*f[i-o-1];
	cout<<f[n];
}