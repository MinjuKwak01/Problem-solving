#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int arr[21];

void rev(int a, int b)
{
	for (int i = 0; i < (b - a) / 2 + 1; i++)
		swap(arr[a + i], arr[b - i]);
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i < 21; i++) {
		arr[i] = i;
	}

	int a, b;
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		rev(a, b);
	}

	for (int i = 1; i < 21; i++) {
		cout << arr[i] << " ";
	}
}