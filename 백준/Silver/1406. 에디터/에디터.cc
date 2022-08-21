#include<iostream>
#include<list>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

    list<char> L;
    for (auto c : s) //for(int i=0;i<s.length();i++){ L.push_back(s[i]) }
        L.push_back(c);

    auto cursor = L.end();

    int q;  //개수
    cin >> q;
    while (q--) {
        char op;
        cin >> op;

        if (op == 'P') {
            char add;
            cin >> add;
            L.insert(cursor, add); //cusrer 왼쪽에 add 추가
        }
        else if (op == 'L') {
            if (cursor != L.begin()) 
                cursor--;
        }
        else if (op == 'D') {
            if (cursor != L.end()) 
                cursor++;
        }
        else { // 'B'
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }

    for (auto c : L) cout << c;
}