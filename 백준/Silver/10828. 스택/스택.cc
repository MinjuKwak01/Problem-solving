#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{

	stack<int> stk;
	int t, num;
	cin >> t;

	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;

		if (s == "push") {
			cin >> num;
			stk.push(num);
		}
		else if (s == "pop") {
			if (stk.empty() == true) {
				cout << -1 << '\n';
			}
			else {
				cout << stk.top() << '\n';
				stk.pop();
			}
		}
		else if (s == "empty") {
			cout << stk.empty() << '\n';
		}
		else if (s == "top") {
			if (stk.empty() == true) {
				cout << -1 << '\n';
			}
			else
				cout << stk.top() << '\n';
		}
		else if (s == "size") {
			cout << stk.size() << '\n';
		}
	}
	return 0;
}