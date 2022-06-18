#include<iostream>
using namespace std;

int main()
{
	int t, n[10];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n[i];
	}


	for (int i = 0; i < t; i++) {
		int cnt = 0;
		while (n[i] != 0)
		{
			if (n[i] % 2 == 1) {
				cout << cnt << " ";
			}
			n[i] = n[i] / 2;
			cnt++;
		}
		cout << endl;
	}

	return 0;
}