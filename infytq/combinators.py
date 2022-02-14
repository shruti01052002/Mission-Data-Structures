from itertools import combinations
li = list(map(int, input().split(',')))
su = int(input())
re = list()

for i in combinations(li, 4):
      re.append(i)
print(re)
c = 0
f = []
for i in re:
    if sum(i) == su:
        f.append(i)
        c+=1
print(c)
print(f)
