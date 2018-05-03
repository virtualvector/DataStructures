m,n = [3,4]

def product(m,n):
    if(m==1): return n
    else: return n+product(m-1,n)

print product(m,n)
