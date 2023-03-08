def solution(nums):
    nums_len= len(set(nums))
    
    if nums_len< len(nums)/2:
        return nums_len
    else:
        return len(nums)/2