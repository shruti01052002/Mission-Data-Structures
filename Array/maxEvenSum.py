t = int(input())
for i in range(t):
    n = int(input())
    su = (n*(n+1))//2
    if su%2==0:
        print(n)
    else:
        print(n-1)
