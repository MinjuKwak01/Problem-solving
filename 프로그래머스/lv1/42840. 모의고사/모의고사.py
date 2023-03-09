def solution(answers):
    su1=[1,2,3,4,5]
    su2=[2,1,2,3,2,4,2,5]
    su3=[3,3,1,1,2,2,4,4,5,5]
    result=[]
    
    problems=len(answers)
    c1,c2,c3=0,0,0
    for i in range(problems):
        s1= i%5
        s2= i%8
        s3= i%10
        
        if su1[s1]==answers[i]:
            c1+=1
        if su2[s2]==answers[i]:
            c2+=1
        if su3[s3]==answers[i]:
            c3+=1
            
    k=max(c1,c2,c3)
        
    if k==c1:
        result.append(1)
    if k==c2:
            result.append(2)
    if k==c3:
        result.append(3)
            
    return result
            
    