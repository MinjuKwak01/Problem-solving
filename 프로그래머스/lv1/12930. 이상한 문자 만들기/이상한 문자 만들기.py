def solution(s):
    answer=''
    list1= s.split(' ')
    
    for i in list1: #3
        for j in range(len(i)):
            if j%2==0:
                answer+=i[j].upper()
            else:
                answer+=i[j].lower()
        answer+=' '
    return answer[0:-1]
                
        