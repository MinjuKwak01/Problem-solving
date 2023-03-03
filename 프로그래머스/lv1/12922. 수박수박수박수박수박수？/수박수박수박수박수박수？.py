def solution(n):
    str1="수박"
    str2="수"
    
    if n%2==1:
        return str1*(n//2)+str2
    return str1*(n//2)