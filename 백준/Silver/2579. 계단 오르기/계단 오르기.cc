#include<iostream>
#include<algorithm>
using namespace std;

int d[300][3];
int score[300];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int sum = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> score[i];
	}
	if (n == 1) {
		cout << score[1];
		return 0;
	}
	d[1][1] = score[1];
	d[1][2] = 0;
	d[2][1] = score[2];
	d[2][2] = score[1] + score[2];

	for (int i = 3; i <= n; i++) {
		d[i][1] = max(d[i - 2][1], d[i - 2][2]) + score[i];
		d[i][2] = d[i - 1][1] + score[i];
	}
	cout << max(d[n][1], d[n][2]);
	return 0;
}