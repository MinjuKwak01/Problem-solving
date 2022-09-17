#include<iostream>
#include<queue>
#include<vector>
using namespace std;

#define X first
#define Y second

int board[51][51];
bool visited[51][51];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

queue<pair<int, int>> Q;
int m, n, k;

void bfs(int a, int b)
{
	visited[a][b] = 1;
	Q.push({ a,b });

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (visited[nx][ny] == 1 || board[nx][ny] != 1)
				continue;
			visited[nx][ny] = 1;
			Q.push({ nx,ny });
		}
	}
}

int main()
{
	int T;
	cin >> T;


	int x, y;
	for (int i = 0; i < T; i++) {
		cin >> m >> n >> k;
		for (int j = 0; j < k; j++) {
			cin >> x >> y;
			board[y][x] = 1;
		}
		int worm = 0;
		for (int a = 0; a < n; a++) {
			for (int b = 0; b < m; b++) { //모든 칸을 확인
				if (board[a][b] == 0 || visited[a][b] == 1)
					continue;
				//if (board[a][b] == 1 && !visited[a][b]) {
					bfs(a, b);
					worm++;
			//	}
			}
		}
		cout << worm << '\n';
		for (int c = 0; c < n; c++) {
			fill(board[c], board[c] + m, 0);
			fill(visited[c], visited[c] + m, false);
		}
	}
	return 0;
}