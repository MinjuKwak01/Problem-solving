#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long sum = 0;
	int i = 1;
	int cnt = 0;
	while (1)
	{
		sum += i;
		cnt++;
		i++;
		if (sum > n) {
			cnt--;
			break;
		}
	}
	cout << cnt;
	return 0;

}