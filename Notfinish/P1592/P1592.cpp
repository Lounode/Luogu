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
#define INF 10e8+10;
using namespace std;
int n,k;
int s[i]={}
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=INF;i++)
	{
		if(gcd(n,s[i])==1)
			k--;
		if(k>=0)
		{
			cout<<s[i];
			break;
		}
	}
	return 0;
}