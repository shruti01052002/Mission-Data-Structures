from collections import *
t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    mi = float("inf")
    a.sort()
    b.sort()
    di = defaultdict(int)
    for j in range(n-1):
        f1 = b[j]-a[j]
        f2 = b[j]-a[j+1]
        if f1!=f2:
            if f1>0:
                di[f1]+=1
            if f2>0:
                di[f2]+=1
        else:
            if f1>0:
                di[f1]+=1
    for key, val in di.items():
        if val==n-1:
            mi = min(mi, key)
    print(mi)