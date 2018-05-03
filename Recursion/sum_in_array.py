ll = [1,2,3,4,5]

def sum_list(ll,n):
    return ll[0] if n==0 else  ll[n]+sum_list(ll,n-1)

print sum_list(ll,len(ll)-1)
    
