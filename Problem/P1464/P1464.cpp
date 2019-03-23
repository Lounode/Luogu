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
#define ll long long
using namespace std;
ll a,b,c;
ll s[30][30][30];
ll w(ll a,ll b,ll c)
{
	if(a<=0||b<=0||c<=0)
		return 1;
	if(a>20||b>20||c>20)
	{
		a=21;
		b=21;
		c=21;
		s[a][b][c]=w(20,20,20);
	}
	if(s[a][b][c]==0)
	{
		if(a<b&&b<c)
    		s[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    	else
    		s[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	}
    return s[a][b][c];
}
int main()
{
	while(true)
	{
		cin>>a>>b>>c;
		
		if(a==-1&&b==-1&&c==-1) break;
		//if(a<=0&&b<=0&&c<=0)
			cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<"\n";
	}
	return 0;
}
