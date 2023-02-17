#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int num=0;
    int y=x;
    while(x!=0){
        num+=x%10;
        x/=10;
    }
    
    if(y%num==0){
        return true;
    }
    else{
        return false;
    }
}