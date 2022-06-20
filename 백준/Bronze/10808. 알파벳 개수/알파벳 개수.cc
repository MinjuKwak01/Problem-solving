#include<iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int a[26] = { 0 };
	for (int i = 0; i < s.size(); i++) {
		a[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << a[i] << " ";
	}
	return 0;
}