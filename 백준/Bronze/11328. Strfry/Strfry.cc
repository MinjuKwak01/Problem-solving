#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	for (int j = 0; j < n; j++) {
		int alpha1[26] = { 0 };
		int alpha2[26] = { 0 };

		string a, b;
		cin >> a >> b;

		for (int i = 0; i < a.length(); i++) {
			alpha1[a[i] - 'a']++;
			alpha2[b[i] - 'a']++;
		}
		bool what=true;
		for (int i = 0; i <26; i++) {
			if (alpha1[i] != alpha2[i])
				what = false;
		}
		if (what)
			cout << "Possible" << '\n';
		else
			cout << "Impossible" << '\n';
	}
	return 0;
}