#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
struct gk
{
	int cd; //长度 
	int xq; //需求码 
};
gk r[1010000];

int n,q;
int cf[11]={0,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
int s[1010000];
int main ()
{
	scanf("%d%d",&n,&q);

	for(int i=1;i<=n;i++)
		scanf("%d",&s[i]);
	for(int i=1;i<=q;i++)
		scanf("%d%d",&r[i].cd,&r[i].xq);
//	cout<<"N:"<<n<<" "<<"Q:"<<q<<"\n";
//	for(int i=1;i<=n;i++)
//		cout<<s[i]<<"\n";
//	for(int i=1;i<=q;i++)
//		cout<<r[i].cd<<" "<<r[i].xq<<"\n";
//

//	cout<<2123%100;
	for(int i=1;i<=q;i++)
	{
		int sum=9999999;
		bool j=false;
		for(int o=1;o<=n;o++)
		{
			if(r[i].xq==s[o]%cf[r[i].cd]||r[i].xq==s[o])
			{
				sum=min(sum,s[o]);
				j=true;
			}
			
		}
		if(j)
		cout<<sum<<"\n";
		else
		cout<<"-1"<<"\n";
	}
	
		
	return 0;
} 