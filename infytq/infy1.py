from itertools import combinations
li = list(map(int, input().split()))
re = []
for r in range(len(li) + 1):
    fe =  combinations(li, r)
    te = list(fe)
    re+=te
ma = max(li)
print(re)
for i in range(len(re)):
    re[i] = sum(re[i])
print(re)
