ll = [1,2,3,4,5]

def sum_list(ll,n):
    if n==0: return ll[0]
    else: return ll[n]+sum_list(ll,n-1)

print sum_list(ll,len(ll)-1)
    
