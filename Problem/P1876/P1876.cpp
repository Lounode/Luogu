#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i*i<=n;i++)
		cout<<i*i<<" ";
	return 0;
}