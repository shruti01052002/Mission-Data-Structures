from collections import Counter
s = list(input())
# s.sort()
# print(s)
li = []
for i in s:
    li.append(i)
for i in range(len(s)):
    s[i] = s[i].lower()
s.sort()
di = dict(Counter(s))
re = []
temp = []
for i in range(len(s)):
    f = ''
    if s[i] not in temp:
        if di[s[i]]==1 and s[i] in li:
            re.append(s[i])
            temp.append(s[i])
        elif di[s[i]]==1 and s[i] not in li:
            if s[i].isupper():
                re.append(s[i].lower())
            else:
                re.append(s[i].upper())
            temp.append(s[i])
        else:
            temp.append(s[i])
            for j in li:
                if j==s[i] or j==s[i].lower() or j==s[i].upper():
                    f+=j
            re.append(f)
ans = ''
i = 0
j = len(re)-1
# print(re)
while i<=j:
    if i==j:
        ans += re[i]
    else:
        ans += re[i]
        ans += re[j]
    i+=1
    j-=1
print(ans)
