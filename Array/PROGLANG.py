t = int(input())
for i in range(t):
    a, b, a1, b1, a2, b2 = map(int, input().split())
    if (a==a1 and b==b1) or (b==a1 and a==b1):
        print(1)
    elif (a==a2 and b==b2) or (b==a2 and a==b2):
        print(2)
    else:
        print(0)