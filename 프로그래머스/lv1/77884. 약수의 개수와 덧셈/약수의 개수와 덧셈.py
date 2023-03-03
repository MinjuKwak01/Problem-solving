def solution(left, right):
    sum=0
    for a in range(left, right+1):
        count=0
        for i in range(1,a+1):
            if a%i==0:
                count+=1
                
            
        if count%2==1:
            sum+=(-1)*a
        else:
            sum+=a
            
    return sum

