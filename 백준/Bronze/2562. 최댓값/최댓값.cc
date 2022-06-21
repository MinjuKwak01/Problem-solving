#include<iostream>
using namespace std;

int main()
{
	int a[9];
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	int max = 0, index = 0;
	for (int i = 0; i < 9; i++) {
		if (a[i] > max) {
			max = a[i];
			index = i;
		}
	}
	cout << max << '\n' << index+1;
	return 0;
}