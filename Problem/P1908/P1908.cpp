#include <iostream>
#include <cstdio>
using namespace std;
const int maxa=5e5+5;
int n;
long long ans=0;
int a[maxa],b[maxa];

void mssort(int s,int t){
    if(s==t) return ;
    	int m=s+t>>1;
    mssort(s,m);
	mssort(m+1,t);
    int i=s,j=m+1,k=s;
    
    while(i<=m&&j<=t)
    {
    	if(a[i]<=a[j]) 
			b[k++]=a[i++]; 
        else 
		{
			b[k++]=a[j++];
			ans+=(long long)m-i+1;
		}
	}
        
    while(i<=m) 
	{
		b[k]=a[i];
		k++;
		i++;
	}
    while(j<=t) 
	{
		b[k]=a[j];
		k++;
		j++;
	}
    for(int i=s;i<=t;i++) 
	a[i]=b[i];
}
inline int in()
{
    char ch=getchar();
    int x=0,f=1;
    while(ch<'0'||ch>'9')
	{
		if(ch=='-') f=-1;
		ch=getchar();
	}
    while(ch>='0'&&ch<='9') 
	{
		x=x*10+(ch^48);
		ch=getchar();
	}
    return x*f;
}
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		a[i]=in();
	mssort(1,n);
	cout<<ans<<"\n";
	return 0;
}