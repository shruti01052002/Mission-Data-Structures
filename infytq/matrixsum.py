m, n = map(int, input().split())
a = []
for i in range(m):
    f = list(map(int, input().split()))
    a.append(f)
li = []
for i in range(m-1):
    for j in range(n-1):
        # s = sum([a[i][j], a[i+1][j], a[i][j+1], a[i+1][j+1]])
        n1 = sum(list(map(int, list(str(a[i][j])))))
        n2 = sum(list(map(int, list(str(a[i][j+1])))))
        n3 = sum(list(map(int, list(str(a[i+1][j])))))
        n4 = sum(list(map(int, list(str(a[i+1][j+1])))))
        # print(n1, n2, n3, n4)
        print(a[i][j], a[i+1][j], a[i][j+1], a[i+1][j+1])
        if a[i][j]%n1==0 and a[i+1][j]%n3==0 and a[i][j+1]%n2==0 and a[i+1][j+1]%n4==0:
            # print("yes")
            li.append([a[i][j], a[i][j+1]])
            li.append([a[i+1][j], a[i+1][j+1]])
for i in li:
    print(i[0], i[1])
# print(li)