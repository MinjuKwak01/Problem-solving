#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	int c= a % b;
	while (c != 0) {
		a = b;
		b = c;
		c= a % b;
	}
	return b;
}


int main() {
	int p, q;
	cin >> p >> q;
	int g = gcd(p, q);
	cout << g << '\n';
	cout << (p * q) / g << '\n';
}