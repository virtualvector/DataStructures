s= "quick brown fox"

def reverse_func(s,l):
    if(l!=len(s)-1):
        reverse_func(s,l+1)
    print s[l],

print reverse_func(s,0)

    
