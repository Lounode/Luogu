#include <iostream>
#include <cstdio>
using namespace std;
int n;
int s[10000];
int main ()
{
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int o=1;o<=i/2;o++)
			s[i]+=s[o];
		s[i]++;
	}
	cout<<s[n];
	return 0;	
}