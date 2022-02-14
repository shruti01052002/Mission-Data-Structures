import math


n = int(input())
s = 0
x = int(math.sqrt(n))+1
li = []
for i in range(1, x+1):
   if n%i==0:
       if i not in li and i!=n:
            li.append(i) 
       if n//i not in li and n//i!=n:
           li.append(n//i)
if sum(li)==n:
    print("Yes")
else:
    print("No")
print(li)
print(sum(li))
        