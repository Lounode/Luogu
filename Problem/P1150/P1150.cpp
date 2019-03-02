#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int main ()
{
	scanf("%d%d",&n,&m);
	cout<<n+(n-1)/(m-1);
}