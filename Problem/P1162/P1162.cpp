#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int n;
int s[50][50];
int d[50][50];
void bfs( int x,  int y)
{
	if (x>n||x<1||y>n||y<1||s[x][y]!=0)
		return;

	s[x][y]=1;
	bfs(x+1, y);
	bfs(x-1, y);
	bfs(x, y+1);
	bfs(x, y-1);

}
int main()
{
	scanf("%d",&n);

	for (int i = 1; i <= n; i++)
		for (int o = 1; o <= n; o++)
		{
			scanf("%d",&s[i][o]);
			if (s[i][o] == 1)
				d[i][o] = -1;
		}
			
	for (int i = 1; i <= n; i++)
	{
		if (s[i][1] != 1) 
			bfs(i, 1);
		if (s[i][n] != 1) 
			bfs(i, n);
	}
	for (int i = 1; i <= n; i++)
	{
		if (s[1][i] != 1) 
			bfs(1, i);
		if (s[n][i] != 1) 
			bfs(n, i);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] == -1)
				cout << "1 ";
			else
				if (s[i][j] == 0)
					cout << "2 ";
				else cout << "0 ";
		}
		cout << "\n";
	}
	system("pause");
    return 0;
}

