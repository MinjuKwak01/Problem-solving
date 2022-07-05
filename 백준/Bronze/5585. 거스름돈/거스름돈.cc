#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int money;
	cin >> money;

	vector<int> v = {500, 100, 50, 10, 5, 1};

	int left = 1000 - money;
	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		cnt += left / v[i];
		left %= v[i];
	}

	cout << cnt;
	return 0;
}