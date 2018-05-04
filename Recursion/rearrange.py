ll = [1,2,3,4,5,6]

def rearrange(ll,n):
    if(n==len(ll)-1): return
    if(ll[n]%2!=0 and ll[n+1]%2==0):
        ll[n+1],ll[n] = ll[n],ll[n+1]
    rearrange(ll,n+1)
rearrange(ll,0)
print ll
