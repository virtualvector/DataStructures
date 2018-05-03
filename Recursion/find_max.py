ll = [122,20,3,4,5]

def fin_min(ll,n):
    if(n==0): return ll[0]
    pp=fin_min(ll,n-1)
    if(ll[n]< pp): return ll[n]
    else: return pp 

print fin_min(ll,len(ll)-1)
