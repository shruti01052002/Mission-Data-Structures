li = list(map(int, input().split()))
re = []
ol = []
for i in li:
    if (sum(ol)+i)%2!=0:
        ol.append(i)
    