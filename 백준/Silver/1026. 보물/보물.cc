#include<iostream>
#include<algorithm>
using namespace std;


int a[50];
int b[50];
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n);

	int result = 0;
	for (int i = 0; i < n; i++) {
		result += a[i] * b[n - 1 - i];
	}
	cout << result;
	return 0;
}