from collections import Counter
t = int(input())
for i in range(t):
    s = input()
    di = dict(Counter(s))
    for i in s:
        if di[i]>1:
            di[i]-=1
            s = s[1:]
        else:
            break
    print(s)