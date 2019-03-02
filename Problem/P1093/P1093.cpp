#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath> 
using namespace std;
struct xs
{
	int xh;
	int c;
	int m;
	int e;
	int cj=0;
};
bool cmp(xs a,xs b)
{
    if(a.cj>b.cj) return 1;
    else if(a.cj<b.cj) return 0;
    else
    {
        if(a.c>b.c) return 1;
        else if(a.c<b.c) return 0;
        else
        {
            if(a.cj>b.cj) return 0;
            else return 1;
        }
    }
}
xs s[1000];
int n;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d",&s[i].c,&s[i].m,&s[i].e);
		s[i].xh=i;
		s[i].cj=s[i].c+s[i].m+s[i].e;
	}
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=5;i++)
	cout<<s[i].xh<<" "<<s[i].cj<<"\n";
	return 0;
}