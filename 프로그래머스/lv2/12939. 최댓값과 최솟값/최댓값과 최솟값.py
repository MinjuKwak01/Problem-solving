def solution(s):
    list1= list(map(int,s.split(' ')))
    
    return str(min(list1))+" "+str(max(list1))