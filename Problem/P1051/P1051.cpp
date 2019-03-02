#include <iostream>
#include <cstdio>
#include <algorithm>
#define jxj jxja
using namespace std;
struct xs
{
	char xm[50];	//姓名
	int qmcj;//期末平均成绩
	int bjcj;//班级评议成绩
	char xsh; //是否为学生干部
	char xbsf;//是否为西部省份学生
	int lws;//论文数
	int jxj=0;//奖学金 
};
bool cmp (xs a,xs b)
{
	if(a.jxj>b.jxj)
		return true;
	return false;
}
xs s[110];
xs ma;
int n;
int sum=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s %d %d %c %c %d",&s[i].xm,&s[i].qmcj,&s[i].bjcj,&s[i].xsh,&s[i].xbsf,&s[i].lws);
	//	cout<<s[TS].xm<<" "<<s[TS].qmcj<<" "<<s[TS].bjcj<<" "<<s[TS].xsh<<" "<<s[TS].xbsf<<" "<<s[TS].lws; 
		if(s[i].qmcj>80&&s[i].lws>0)	{s[i].jxj+=8000;	sum+=8000;}				//院士奖学金
		if(s[i].qmcj>85&&s[i].bjcj>80)	{s[i].jxj+=4000;	sum+=4000;}					//五四奖学金
		if(s[i].qmcj>90)				{s[i].jxj+=2000;	sum+=2000;}		//成绩优秀奖
		if(s[i].qmcj>85&&s[i].xbsf=='Y'){s[i].jxj+=1000;	sum+=1000;}						//西部奖学金
		if(s[i].bjcj>80&&s[i].xsh=='Y')	{s[i].jxj+=850;		sum+=850; }				//班级贡献奖
		if(s[i].jxj>ma.jxj)				{ma=s[i];}
	}
	cout<<ma.xm<<"\n"<<ma.jxj<<"\n"<<sum;
	return 0;
}