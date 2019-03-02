#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s1[7],s2[7];
int a1[7],a2[7];
int l1,l2;
int sum1=1,sum2=1;
int main ()
{
	scanf("%s",s1);
	scanf("%s",s2);
	
	l1=strlen (s1);
	l2=strlen (s2);
//	
//	cout<<"L1:"<<l1<<"\n";
//	cout<<"L2:"<<l2<<"\n";
//	
	for(int i=0;i<l1;i++)
		a1[i]=s1[i]-'A'+1;
	for(int o=0;o<l2;o++)
		a2[o]=s2[o]-'A'+1;
//	
//	cout<<"A1:";
//	for(int i=0;i<l1;i++)
//		cout<<a1[i]<<" ";
//	cout<<"\n";
//	cout<<"A2:";
//	for(int o=0;o<l2;o++)
//		cout<<a2[o]<<" ";
//	cout<<"\n";
//
	for(int i=0;i<l1;i++)
		sum1=sum1*a1[i];
	for(int o=0;o<l2;o++)
		sum2=sum2*a2[o];
//		
//	cout<<"SUM:"<<sum1<<" "<<sum2<<"\n";
//	
	if(sum1%47==sum2%47)
		cout<<"GO"<<"\n";
	else
		cout<<"STAY"<<"\n";
	return 0;
} 
 