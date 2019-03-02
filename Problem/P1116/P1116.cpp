#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n;
int s[10001];
int sum=0;
int main ()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&s[i]);
	for(int i=0;i<n-1;i++)
		for(int o=0;o<n-1;o++)
		{
			if(s[o]>s[o+1])
			{
				swap(s[o],s[o+1]);
				sum++;
			}
		}	
	cout<<sum;
	return 0;
}