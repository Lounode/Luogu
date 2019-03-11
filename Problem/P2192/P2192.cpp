#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
typedef long long ll;
using namespace std;
int n;
int a=0,b=0;
int in;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&in);
		if(in==5) a++;
		if(in==0) b++;
	}
	if(b==0)	{cout<<"-1"<<"\n";return 0;}
	if(a<9)		{cout<<"0"<<"\n"; return 0;}
	for(int i=1;i<=a-(a%9);i++)
		cout<<"5";
	for(int i=1;i<=b;i++)
		cout<<"0";
	return 0;
}