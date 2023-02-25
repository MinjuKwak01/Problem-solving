def solution(n):
    list1=list(str(n))
    list1.sort(reverse=True)
    
    s=("".join(list1))

    
    return int(s)