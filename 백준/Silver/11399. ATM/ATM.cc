#include<iostream>
#include<algorithm>
using namespace std;

int N, result;
int P[1002];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) 
		cin >> P[i];
	sort(P, P + N);
	for (int i = 0; i < N; i++)
		result += P[i] * (N - i);
	cout << result;
}