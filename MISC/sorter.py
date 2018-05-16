def sorter(a,b):
    if(a[1]>b[1]): return -1
    else : return 1


ll = [[(1,2),3],[(3,4),5],[(6,7),8]]
print ll
ll.sort(sorter)
print ll
