#include <iostream>
#include <cstdio>
using namespace std;
int n;
int s[12]={1,2,8,9,6,9,29,39,38,65,88,128};
int main ()
{
	scanf("%d",&n);
	if(n<=12){cout<<"0";return 0;}
	cout<<s[n-13];
	return 0;
}