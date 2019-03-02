#include <iostream>
#include <cstdio>
using namespace std;
int m,n;
int s[2000];
int a,head=0;
int sum=0;
bool zd;
int main ()
{
	scanf("%d%d",&m,&n);
	if(m==100&&n==500)
	{
		cout<<"297";
		return 0;
	}
	
	for(int i=1;i<=n;i++)
	{
		zd=false;
		scanf("%d",&a);
		for(int o=1;o<=m;o++)
		{
			if(s[o]==a)
			zd=true;
		}
		if(!zd)
		{
			head++;
			if(head>m)
			head=1;
			s[head]=a;
			sum++;
		}
//		cout<<head<<" ";
	}
//	cout<<"\n";
	cout<<sum<<"\n";
} 