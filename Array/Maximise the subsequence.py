t = int(input())
for i in range(t):
    n, k = map(int, input().split())
    li = list(map(int, input().split()))
    ne = []
    po = []
    for j in range(n):
        if li[j]<0:
            ne.append(li[j])
        else:
            po.append(li[j])
    if len(ne)==0:
        print(sum(li))
    else:
        ne.sort()
        s = sum(po)
        for j in range(min(k, len(ne))):
            s+=abs(ne[j])
        print(s)

