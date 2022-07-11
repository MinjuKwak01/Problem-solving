#include<iostream>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	int result = 0;
	for (int i = 0; i < tc; i++) {
		int num;
		cin >> num;

		int cnt = 0;
		for (int j = 1; j <= num; j++) {
			if (num % j == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			result++;
		}
	}
	cout << result;
	return 0;
}