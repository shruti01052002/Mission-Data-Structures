t = int(input())
for i in range(t):
    n, k = map(int, input().split())
    res = 0
    li = list(map(int, input().split()))
    ma = max(li)
    for j in range(k-1, n):
        if li[j]==ma:
            res+=(n-j)
    print(res)