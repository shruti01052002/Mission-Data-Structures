from collections import Counter
import sys
t = int(input())
for i in range(1, t+1):
    s = input() 
    v = ['A', 'E', 'I', 'O', 'U']
    di = dict(Counter(s))
    c = 0
    vo = 0
    for key, val in di.items():
        if key in v:
            vo+=val
        else:
            c+=val
    mi = 10000000000000000000000000000000000000000000
    print(len(s))
    if len(di)==1:
        print("Case #"+str(i)+": "+str(0))
    elif c==0:
        print("Case #"+str(i)+": "+str(vo))
    elif vo==0:
        print("Case #"+str(i)+": "+str(c))
    else:
        for key, val in di.items():
            if key in v:
                temp = vo-val
                res = temp*2+c
                mi = min(res, mi)
            else:
                temp = c-val
                res = temp*2+vo
                mi = min(res, mi)
        print("Case #"+str(i)+": "+str(mi))

