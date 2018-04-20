from itertools import permutations
ll = [int(i) for i in raw_input().strip().split()]

for i in list(permutations(ll,len(ll))):
    if(sum(i[:len(i)/2])==sum(i[len(i)/2:])):
        print i
    
