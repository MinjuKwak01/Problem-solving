#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num=1;
    for(int i=0;i<n;i++){
        if(n%num==1){
            answer=num;
            break;
        }
        num++;
    }
    return answer;
}