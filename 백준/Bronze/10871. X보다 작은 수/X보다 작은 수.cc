#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v;

	int n,num,x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < n; i++) {
		if (x <= v[i])
			continue;
		cout << v[i] << " ";
	}
	return 0;
}