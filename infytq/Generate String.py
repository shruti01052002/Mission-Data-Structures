seq=input()
word=input()
di={}
f=0
def makeDict(string,di):
    for j in string:
        if j.lower() in di:
            di[j.lower()]+=1
        elif j.upper() in di:
            di[j.upper()]+=1

#to check if there is Language error       
for i in seq:
    if i in di:
        f=1
        break
    di[i]=0
#Calculations if there is no Language Error Means there's no repeated character in sequence
if f==0:
    l=[]
    s=""
    for i in range(len(word)-1):
        if word[i] ==" " and word[i+1]==" ":
            s+=" "
        elif word[i]==" " and word[i+1]!=" ":
            s+=" "
            l.append(s)
            s=""
    l.append(" ")
    res=""
    li=word.split()
    a=0
    for i in range(len(li)):
        st=""
        makeDict(li[i],di)
        for key,val in di.items():
            for z in range(val):
                st=st+key
            di[key]=0
        
        res=res+st+l[i]
        
    print(res,end="")
#if the sequence contain repeated characters
else:
    print("New language Error", end="")