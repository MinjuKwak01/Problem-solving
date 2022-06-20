#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;

	int a[10];

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> a[j];
		}
		sort(a, a + 10);
		cout << a[7] << endl;
	}
	return 0;
}