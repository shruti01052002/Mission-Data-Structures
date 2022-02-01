li = list(map(int, input().split(',')))
s = 0
di = ''
id1 = li.index(5)
id2 = li.index(8)
for i in range(len(li)):
    if i not in range(id1, id2+1):
        s+=li[i]
    if i>=id1 and i<=id2:
        di+=str(li[i])
print(s+int(di))
print(int(di))
print(s)


