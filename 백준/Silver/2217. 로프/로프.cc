#include<iostream>
#include<algorithm>
using namespace std;

int a[100000];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);

	int result = 0;
	for (int i = 1; i <= n; i++) {
		result = max(result, a[n - i] * i);
	}
	cout << result;

	return 0;
}