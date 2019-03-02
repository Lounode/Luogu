#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int main ()
{
	scanf("%d%d",&n,&m);
	int a=n/m;
	for(int i=1;i<=m;i++)
	{
		if(i<m-(n-a*m)+1)
			cout<<a<<" ";
		else
			cout<<a+1<<" ";
	}
	return 0;
}