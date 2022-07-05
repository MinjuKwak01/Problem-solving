#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int tc, num;
	cin >> tc;

	vector<int> v;
	for (int i = 0; i < tc; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < tc; i++) {
		cout << v[i] << endl;
	}
	return 0;
}