#include<iostream>
#include<algorithm>
#include<vector>
#include<cctype>
using namespace std;

bool com(string& a, string& b)
{
	int sum_a = 0;
	int sum_b = 0;

	if (a.size() != b.size()) //길이가 다르면 짧은것 먼저
		return a.size() < b.size();

	for (int i = 0; i < a.size(); i++) { //숫자끼리 더함
		if(isdigit(a[i]))//0을 제외한 다른숫자는 true (즉 숫자일때)
			sum_a+=(a[i]-'0');  //문자로 입력된 숫자-> 숫자로 변경
	}
	for (int i = 0; i < b.size(); i++) {
		if (isdigit(b[i]))
			sum_b += (b[i] - '0');
	}

	if (sum_a != sum_b) // 자리수의 합 비교해서 작은합이 먼저
		return sum_a < sum_b;

	return a < b; //두조건으로 비교할수없으면 사전순
}


int main()
{
	int n;
	vector<string> v;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), com);

	for (int i = 0; i < n; i++) {
		cout << v[i] << '\n';
	}
}