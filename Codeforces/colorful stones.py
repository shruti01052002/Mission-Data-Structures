col = input()
pat = input()
# print(col, pat)
i = 0
for j in pat:
    # print(col[i], j)
    if col[i]==j:
        i+=1
print(i+1)
