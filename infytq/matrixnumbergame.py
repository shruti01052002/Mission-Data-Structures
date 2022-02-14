m, n = map(int, input().split())
a = []
for i in range(m):
    f = list(map(int, input().split()))
    a.append(f)
li = []
for i in range(m-2):
    for j in range(n-2):
        if a[i][j] not in li:
            if(a[i][j]==a[i][j+1] and a[i][j+1]==a[i][j+2]):
                li.append(a[i][j])
        if a[i][j] not in li:
            if(a[i][j]==a[i+1][j] and a[i+1][j]==a[i+2][j]):
                li.append(a[i][j])
        if a[i][j] not in li:
            if(a[i][j]==a[i+1][j+1] and a[i+1][j+1] and a[i+2][j+2]):
                li.append(a[i][j])
print(min(li))