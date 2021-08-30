t = int(input())
for i in range(t):
    a, b, c = map(int, input().split())
    mi = min(a, b)
    mi = min(mi, c)
    if mi==a:
        print("Draw")
    elif mi==b:
        print("Bob")
    else:
        print("Alice")