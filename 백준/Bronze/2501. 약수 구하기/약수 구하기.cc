#include<iostream>
using namespace std;

int main()
{
	int k, n;
	int cnt = 0;
	cin >> k >> n;
	int a[10000];
	int j = 0;
	for (int i = 1; i <= k; i++) {

		if (k % i == 0) {
			a[j] = i;
			j++;
			cnt++;
		}
	}

	if (cnt >= n)
		cout << a[n - 1];
	else
		cout << 0;
	return 0;
}