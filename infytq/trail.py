n = int(input())
res = 0
while n!=1:
    temp = (10-n%10)
    res += temp
    n = n+temp
    while n%10==0:
        n = n//10
print(res+1)
