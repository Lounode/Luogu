#include <iostream>
#include <cstdio>
using namespace std;
int q;
int sum=0;
//int s[][11];
int main ()
{
	scanf("%d",&q);
	for(int i=1;i<=3;i++)
		for(int o=1;o<=3;o++)
			for(int p=1;p<=3;p++)
				for(int j=1;j<=3;j++)
					for(int k=1;k<=3;k++)
						for(int l=1;l<=3;l++)
							for(int b=1;b<=3;b++)
								for(int n=1;n<=3;n++)
									for(int m=1;m<=3;m++)
										for(int u=1;u<=3;u++)
										{
											if(i+o+p+j+k+l+b+n+m+u==q)
											{
												sum++;
											}
										}
	cout<<sum<<"\n";
	for(int i=1;i<=3;i++)
			for(int o=1;o<=3;o++)
				for(int p=1;p<=3;p++)
					for(int j=1;j<=3;j++)
						for(int k=1;k<=3;k++)
							for(int l=1;l<=3;l++)
								for(int b=1;b<=3;b++)
									for(int n=1;n<=3;n++)
										for(int m=1;m<=3;m++)
											for(int u=1;u<=3;u++)
											{
												if(i+o+p+j+k+l+b+n+m+u==q)
												{
													cout<<i<<" ";
													cout<<o<<" ";
													cout<<p<<" ";
													cout<<j<<" ";
													cout<<k<<" ";
													cout<<l<<" ";
													cout<<b<<" ";
													cout<<n<<" ";
													cout<<m<<" ";
													cout<<u<<" ";
													cout<<"\n";
												}
											}
	return 0;
}