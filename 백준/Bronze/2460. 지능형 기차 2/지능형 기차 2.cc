#include<iostream>
using namespace std;

int main()
{
	int out, in;
	int status[10];

	for (int i = 0; i < 10; i++) {
		cin >> out >> in;
		if (i == 0) {
			status[0] = in;
		}
		else {
			status[i] = status[i-1] + in - out;
		}

	}
	int max = status[0];
	for (int i = 0; i < 10; i++) {
		if (status[i] > max)
			max = status[i];
	}
	cout << max;
	return 0;
}