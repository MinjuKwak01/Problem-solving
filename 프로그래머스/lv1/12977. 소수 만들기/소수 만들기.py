from itertools import combinations
def solution(nums):

    count=0
    for i in combinations(nums,3):
        summation= sum(i)
        
        c=0
        for j in range(2,summation+1):
            if summation%j==0:
                c+=1
        if c==1:
            count+=1
    
    return count
    