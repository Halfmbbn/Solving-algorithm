def solution(n, lost, reserve):
    ureserve = sorted([i for i in reserve if i not in lost])
    ulost = sorted([i for i in lost if i not in reserve])
    cnt = 0
    for i in ureserve:
        if i-1 in ulost:
            ulost.remove(i-1)
            continue
        if i+1 in ulost:
            ulost.remove(i+1)
            continue
        
        
    
    return n - len(ulost) 
