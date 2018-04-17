from itertools import permutations

def check_subsequence(k,y):
    charnum =0
    counter=0

    for yc in y:
        if(yc==k[charnum]):
            charnum+=1
            counter+=1
            if(charnum==len(k) or counter==len(k)): break
    if(counter==len(k)): return True
    else: return False



x,y=[i for i in raw_input("enter the string a,b \n").strip().split()]
if len(x)>len(y):
    x,y=y,x

ll = []
for i in range(1,len(x)):
    for k in list(permutations(x,i)):
        ll.append("".join(k))

print ll
final_list=[]
for k in ll:
    if(check_subsequence(k,y) and check_subsequence(k,x)):
        final_list.append(k)

ss=set(final_list)
limit = 0
for i in ss:
    if(len(i)>limit): limit = len(i)

for i in ss:
    if(len(i)==limit): print i




