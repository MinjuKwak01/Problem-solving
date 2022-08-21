#include<iostream>
using namespace std;

int alpha1[26];
int alpha2[26];
int main()
{
	string a, b;
	cin >> a;
	cin >> b;

	for (int i = 0; i < a.length(); i++) {
		alpha1[a[i] - 'a']++;
	}
	for (int i = 0; i < b.length(); i++) {
		alpha2[b[i] - 'a']++;
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha1[i] > alpha2[i])
			cnt += (alpha1[i] - alpha2[i]);
		else if(alpha1[i] < alpha2[i])
			cnt += (alpha2[i] - alpha1[i]);
	}

	cout << cnt;
}