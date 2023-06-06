#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n,m;
int x,y;
 
int visited[1010][1010];
char llmap[1010][1010];
int dx[]={-1,0,1,0};//x偏移量数组 
int dy[]={0,1,0,-1};//y偏移量数组 

int bfs(int x, int y)
{
	int ans = 1;
	visited[x][y] = 1;
	llmap[x][y] = '#';
	for (int i = 0; i < 4; ++i)
	{	
		int a = x + dx[i];
		int b = y + dy[i];
		cout << a << " " << b << endl;
		if (a >= 0 && a < m && b >= 0 && b < n && llmap[a][b] == '.' && !visited[a][b])
		{
			visited[x][y] = 1;
			ans += bfs(a, b);
		}
	}
	return ans;
}

int main() {
	while (cin >> m >> n, n || m) {
		int x, y;
		for (int i = 0; i < n; ++i) cin >> llmap[i];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
			{
				if (llmap[i][j] == '@')
				{
					x = j;
					y = i;
					
				}
			}
		}
		memset(visited, 0, sizeof(visited));
		cout << x << " " << y << endl;
		cout << bfs(x, y) << endl;
	}
	return 0;
} 
