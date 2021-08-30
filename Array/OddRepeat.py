t = int(input())
for i in range(t):
    n, k, s = map(int, input().split())
    s = s - n**2
    res = s//(k-1)
    print(res)