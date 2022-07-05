#include<iostream>
using namespace std;

int fac(int a)
{
	if (a > 1) {
		return a * fac(a - 1);
	}
	else {
		return 1;
	}
}



int main()
{
	int n;
	cin >> n;

	int result = fac(n);

	cout << result;
	return 0;
}