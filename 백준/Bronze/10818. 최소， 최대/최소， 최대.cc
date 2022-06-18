#include<iostream>
using namespace std;

int main()
{
	int cnt;
	cin >> cnt;
	int* a = new int[cnt];
	for (int i = 0; i < cnt; i++) {
		cin >> a[i];
	}
	int min=a[0], max=a[0];
	for (int i = 1; i < cnt; i++) {
		if (a[i] < min) {
			min = a[i];
		}
		else if (a[i] > max) {
			max = a[i];
		}
	}
	cout << min << " " << max;

	return 0;
}