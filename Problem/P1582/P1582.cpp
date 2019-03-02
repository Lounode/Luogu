#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n,k;
int sum;
int a(int x)
{
	int num=0;
	for(;x;x-=x&-x)
	num++;
	return num;
}
int main ()
{
	scanf("%d%d",&n,&k);
	while(a(n)>k)sum+=n&-n,n+=n&-n;
	cout<<sum;
    return 0;
}