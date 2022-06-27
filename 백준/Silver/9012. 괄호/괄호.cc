#include<iostream>
#include<stack>
using namespace std;

int main()
{

	int tc;
	cin >> tc;

	string ps;
	for (int i = 0; i < tc; i++) {
		cin >> ps;
		stack<char> stk;
		for (int j = 0; j < ps.length(); j++) {
			if (ps[j] == '(') {
				stk.push(ps[j]);
			}
			else if(ps[j]==')'){
				if (!stk.empty()&&stk.top()=='(')
					stk.pop();
				else {
					stk.push(ps[j]);
				}
			}
		}
		if (stk.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}