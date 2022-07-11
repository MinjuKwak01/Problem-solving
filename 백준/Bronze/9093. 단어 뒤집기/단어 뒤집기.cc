#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	cin.ignore();
	while (tc--) {
		string s = "";
		getline(cin, s);
		s += ' ';
		stack<char> st;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << s[i];
			}
			else
				st.push(s[i]);
		}
	}
}