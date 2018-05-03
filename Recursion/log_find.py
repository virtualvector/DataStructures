n = 16

def log_finder(n):
    if(n==1): return 0
    else :return 1+log_finder(n/2)

print log_finder(n)
