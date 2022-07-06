#include<iostream>
using namespace std;

int main()
{
	int a, b, c, m;
	cin >> a >> b >> c;

	if (b + c < 60) { // 현재 시간(분) + 필요한시간 <60 인 경우
		cout << a << " " << b + c;  //(시)는 변함없고 현재 시간(분) + 필요한시간
		return 0;
	}
	else {
		a = a + (b + c) / 60; //시는 분끼리 합한것/60(몫)
		m = (b + c) % 60;  //분은 분끼리 합한것%60(나머지)
		if (a >= 24) {  //합한 시가 24이상일때
			a = a % 24;  //24로 나눈 나머지
		}
		cout << a << " " << m;
	}
	return 0;
}

