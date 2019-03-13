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
using namespace std;
long long n;
long long s[200000];
long long ans=0;
int main()
{
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++)
		scanf("%lld",&s[i]);
	for(long long i=2;i<=n;i++)
		ans+=max(s[i],s[i-1]);
	cout<<ans;
	return 0;
}