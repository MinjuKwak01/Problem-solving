#include<iostream>
#include<algorithm>
using namespace std;


int a[1000];
int sum[1000];
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);

	for (int i = 0; i < n; i++) {
		if (i == 0)
			sum[i] = a[i];
		else {
			sum[i] = a[i] + sum[i - 1];
		}
	}
	int result = 0;
	for (int i = 0; i < n; i++) {
		result += sum[i];
	}
	cout << result;
	return 0;
}