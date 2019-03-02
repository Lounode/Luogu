#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int s[5];
int gcd (int x,int y)
{
	if(x==0)
		return y;
	else
		return gcd(y%x,x);
}
int main ()
{
	scanf("%d%d%d",&s[1],&s[2],&s[3]);
	sort(s+1,s+3+1);
	cout<<s[1]/gcd(s[1],s[3])<<"/"<<s[3]/gcd(s[1],s[3]);
	return 0;
}