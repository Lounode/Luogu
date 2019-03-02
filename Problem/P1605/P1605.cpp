#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
const int zx[4] = { 0,0,1,-1 };
const int zy[4] = { 1,-1,0,0 };
int n, m, t;
int sx, sy, fx, fy;
int tx, ty;
bool s[1001][1001] = {0};
int sum = 0;
void dfs(int x, int y)
{
	if (x > n ||x<1|| y > m ||y<1|| s[x][y] == true)
		return;
	if (x == fx && y == fy)
	{
		sum++;
		return;
	}
	s[x][y]=true;
	for (int i = 0; i < 4; i++) 
	{
		dfs(x + zx[i], y + zy[i]);
	}
	s[x][y] = 0;

}
int main()
{
	scanf("%d%d%d", &n, &m, &t);
	scanf("%d%d%d%d", &sx, &sy, &fx, &fy);
	for (int i = 1; i <= t; i++)
	{
		scanf("%d%d",&tx,&ty);
		s[tx][ty] = true;
	}
	dfs(sx, sy);
	cout << sum;
	//system("pause");
    return 0;
}