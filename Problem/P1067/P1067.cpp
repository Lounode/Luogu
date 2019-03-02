#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n,in;
bool sc=false;
int main ()
{
	scanf("%d",&n);
	for(int i=n;i>=0;i--)
	{
		scanf("%d",&in);
		if(in)
		{
			if(in>0&&i!=n) 		cout<<"+";
			if(abs(in)>1||i==0)	cout<<in;
			if(in==-1&&i) 		cout<<"-";
			if(i>1)  			cout<<"x^"<<i;
			if(i==1) 			cout<<"x";
		}
			
	}
	return 0;
}