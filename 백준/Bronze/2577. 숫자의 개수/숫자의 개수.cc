#include<iostream>
using namespace std;

int arr[10];

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int result;
	result = a * b * c;
	
	while (result > 0) {
		arr[result % 10]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) cout << arr[i] << '\n';
}