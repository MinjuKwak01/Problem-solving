#include<iostream>
#include<string>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		int num;
		cin >> num;

		string s;
		cin >> s;

		for (int j = 0; j < s.size(); j++) {
			for (int k = 0; k < num; k++) {
				cout << s[j];
			}
		}
		cout << endl;
	}
	return 0;
}