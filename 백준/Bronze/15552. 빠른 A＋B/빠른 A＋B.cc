#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	
	int tc;
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		int a, b;
		cin >> a >> b;

		cout << a + b << '\n';
	}

	return 0;
}