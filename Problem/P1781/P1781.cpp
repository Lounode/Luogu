#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int n;
int sum=0;
string in;
string maxa;
int ins,mas;
int main ()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>in;
		ins=in.size();
		mas=maxa.size();
		if (ins>mas||(ins>=mas&&in>maxa))
		{
			maxa=in;
			sum=i+1;
		}
	}
	cout<<sum<<"\n";
	cout<<maxa<<"\n";
	return 0;
}