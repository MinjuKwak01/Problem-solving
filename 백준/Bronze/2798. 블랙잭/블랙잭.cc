#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> v1;
	vector<int> v2;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v1.push_back(num);
	}
	int sum = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n-1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = v1[i] + v1[j] + v1[k];
				v2.push_back(sum);
			}
		}
	}

	sort(v2.begin(), v2.end());
	int result = 0;
	
	for (int i = 0; i < v2.size(); i++) {
		if (v2[i] <= m) {
			result = max(result, v2[i]);
		}
	}

	cout << result;
	return 0;
}