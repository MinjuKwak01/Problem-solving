#include<iostream>
using namespace std;

int arr[100];
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int v;
	cin >> v;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == v)
			cnt++;
	}

	cout << cnt;
	return 0;
}