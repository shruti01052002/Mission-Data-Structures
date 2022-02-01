n = int(input())
if n<10:
    print(-1)
else:
    rem = n%10
    n = n//10
    rem = n%10
    print(rem)
