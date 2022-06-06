#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int result;
	result = a * b * c;

	int x[10] = { 0 };
	while (result!= 0) { 
		x[result% 10] += 1;
		result/= 10; 
	}


	for (int i = 0; i < 10; i++) {
		cout << x[i] << endl;
	}
	return 0;
}