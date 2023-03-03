def solution(s):
    length=len(s)
    if len(s)%2==0:
        return s[length//2-1:length//2+1]
    return s[length//2]