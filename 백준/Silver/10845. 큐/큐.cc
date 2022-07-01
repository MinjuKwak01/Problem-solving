#include<iostream>
#include<string>
#include<queue>
using namespace std;


int main()
{
	queue<int> que;
	int tc, value;
	cin >> tc;

	string s;
	for (int i = 0; i < tc; i++) {
		cin >> s;

		if (s == "push") {
			cin >> value;
			que.push(value);
		}
		else if (s == "front") {
			if (que.empty())
				cout << -1 << endl;
			else
				cout << que.front() << endl;
		}
		else if (s == "back") {
			if (que.empty())
				cout << -1 << endl;
			else
				cout << que.back() << endl;
		}
		else if (s == "empty") {
			if (que.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (s == "size") {
			cout << que.size() << endl;
		}
		else if (s == "pop") {
			if (!que.empty()) {
				cout << que.front() << endl;
				que.pop();
			}
			else
				cout << -1 << endl;
		}
	}
	return 0;
}