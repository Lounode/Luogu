#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n;
int sum=0;
struct bs
{
	int op;
	int ed;	
};
bs s[100010];
bs maxb={0,0};
int cmp (bs a,bs b)
{
	if(a.ed<b.ed) 
		return true;
	return false;
}
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d %d",&s[i].op,&s[i].ed);
	sort(s+1,s+n+1,cmp);
//	for(int i=1;i<=n;i++)
//		cout<<s[i].op<<" "<<s[i].ed<<"\n";
	for(int i=1;i<=n;i++)
	{
		if(s[i].op>=maxb.ed)
		{
			sum++;
			maxb=s[i];
		}
	}
	cout<<sum;
	return 0;
}