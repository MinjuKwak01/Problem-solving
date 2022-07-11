#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string s;
	stack<char> stk1;
	stack<char> stk2;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		stk1.push(s[i]);
	}

	int tc;
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		char cmd;
		cin >> cmd;

		if (cmd == 'P') {
			char c;
			cin >> c;

			stk1.push(c);
		}
		else if (cmd == 'L') {
			if (stk1.empty())
				continue;
			else {
				stk2.push(stk1.top());
				stk1.pop();
			}
		}
		else if (cmd == 'D') {
			if (stk2.empty())
				continue;
			else {
				stk1.push(stk2.top());
				stk2.pop();
			}
		}
		else if (cmd == 'B') {
			if (stk1.empty())
				continue;
			else
				stk1.pop();
		}
	}
	//stk1에 있던 모든 원소를 stk2로 옮긴다.
	//그후 stk2를 pop하며 top을 출력해준다.

	while (!stk1.empty()) {
		stk2.push(stk1.top());
		stk1.pop();
	}
	while (!stk2.empty()) {
		cout << stk2.top();
		stk2.pop();
	}
	return 0;
}