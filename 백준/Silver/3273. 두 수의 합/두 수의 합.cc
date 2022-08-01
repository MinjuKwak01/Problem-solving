#include<iostream>
using namespace std;


int arr[1000001]; // 수열의 크기
bool vis[2000001]; //방문했는지 표시
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x;
	cin >> x;

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (x - arr[i] > 0 && vis[x - arr[i]]) { //x에서 수열을 뺀 값이 이미 방문했다면, 쌍이 있다는뜻!! (쌍이 존재하는지 매번 확인)
			count++;
		}
		vis[arr[i]] = 1; //true (모든 수열을 방문했다고 표시)
	}
	cout << count;
	return 0;
}