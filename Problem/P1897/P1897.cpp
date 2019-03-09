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
#define INF 2e7+10
using namespace std;
int n;
int in;
int sum=0;
int maxx=0;
int main()
{
	set<int>s;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&in);
		maxx=max(maxx,in);
		s.insert(in);
	}
	sum=maxx*6+maxx*4;
	sum+=5*s.size();
	sum+=n;
	cout<<sum<<"\n";
	return 0;
}