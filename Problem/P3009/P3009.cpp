/*
动转: f[i]=max(f[i-1]+s[i],f[i-1])
PS:终于有DP的思路了!之前一直没懂
PS:双倍经验?
//*/
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
#define INF 0xfffff
using namespace std;
int n;
int f[200010];
int in;
int maxa=-INF;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&in);
		f[i]=max(f[i-1]+in,in);
	}
	for(int i=1;i<=n;i++)
		maxa=max(f[i],maxa);
	cout<<maxa;
	return 0;
}