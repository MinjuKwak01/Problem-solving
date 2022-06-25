#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0) {
		return a;
	}
	else return gcd(b, a % b);
}


int main()
{
	int n;
	cin >> n;
	int a, b, p;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		p = gcd(a, b);
		cout << (a * b) / p << endl;
	}

	return 0;
	
}