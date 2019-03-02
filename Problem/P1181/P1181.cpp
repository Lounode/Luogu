#include <iostream>
#include <cstdio>
using namespace std;
int n,m,sum=1,o=0;
int s[100010];
int main ()
{
	scanf("%d%d",&n,&m);
	while (n--)
	{
		int ci;
		scanf("%d",&ci);
		if(o+ci<=m)
		o+=ci;
		else
		{
			sum++;
			o=ci;
		}
		
	}
	cout<<sum;
	return 0;
}