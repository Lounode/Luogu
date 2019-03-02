#include <iostream>
#include <cstdio>
using namespace std;
int n,in;
double al=0,su=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&in);
		al+=(double)in;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&in);
		su+=(double)in;
	}
	printf("%0.6f",(al*3-su*2)/(al-su));
	return 0;
}