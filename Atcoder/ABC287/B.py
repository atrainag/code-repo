n,m=[int(i) for i in input().split()]
s=[]
t=[]
for i in range(0,n):
    a=input()
    s.append(a)
for j in range(0,m):
    a=input()
    t.append(a)
cnt=0
for i in range(0,n):
    a=s[i][-3:]
    if(a in t):
        cnt+=1
print(cnt)
