t = int(input())
for i in range(t):
    a, b = map(int, input().split())
    di = abs(a-b)
    if a==b and a==0:
        print(0)
    elif a==b and a!=0:
        print(1)
    else:
        if di%2!=0:
            print(-1)
        elif di%2==0:
            print(2)
    