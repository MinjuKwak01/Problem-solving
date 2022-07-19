#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool com(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main()
{
	int tc;
	cin >> tc;

	vector<string> v;
	string s;
	for (int i = 0; i < tc; i++) {
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), com);

	cout << v[0] << '\n';
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i - 1] == v[i])
			continue;
		cout << v[i] << '\n';
	}

	return 0;
}