#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(string s) {
    int max;
    char tmp;
    int i;
    for(i=0;i<s.length()-1;i++){
		max=i;
        for(int j=i+1;j<s.length();j++){
			if(s[j]>s[max])
                max=j;
        }

        tmp=s[i];
        s[i]=s[max];
        s[max]=tmp;
    }

    return s;
}