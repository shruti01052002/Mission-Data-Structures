#count the triplet i.e., (1, 1, 1) or (1, 2, 3), same or consecutive
n = int(input())
li = list(map(int, input().split()))
c = 0
for i in range(n-2):
    if li[i]==li[i+1] and li[i+1]==li[i+2]:
        c+=1
    if li[i]==li[i+1]-1 and li[i+1]==li[i+2]-1:
        c+=1
print(c)