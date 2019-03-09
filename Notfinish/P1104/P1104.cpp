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
struct stu
{
	char name[30];
	int y;
	int m;
	int d;
}
stu s[200];
bool cmp (stu x,stu y)
{
	if(x.y>y.y)
		return x>y;
	return x<y;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%s%d%d%d",s.name,&s.y,&s.m,&s.d);
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++)
		cout<<s[i].name<<"\n";
	return 0;
}