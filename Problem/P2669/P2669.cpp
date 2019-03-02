#include <iostream>
#include <cstdio>
using namespace std;
int k;
long ts=1,dz=1;
long long sum=0;
int main ()
{
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		if(ts>dz)
		{
			ts=1;
			dz++;
		}
		sum+=dz;
		ts++;
	}
	cout<<sum;
	return 0;
}