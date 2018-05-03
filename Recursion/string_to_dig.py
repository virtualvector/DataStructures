s = "99211145"

def converter(s,n):
    sumval=0
    if(n):
        sumval=converter(s,n-1)

    return int(ord(s[n])-ord('0'))+sumval*10

print converter(s,len(s)-1)
