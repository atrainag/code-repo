x=[]
y=[]
s={}
t={}
for i in range(int(input())):
    a=input()
    if(not a in x):
        x.append(a)
        s[a]=0
        t[a]=0
    s[a]+=1
for i in range(int(input())):
    a=input()
    if(not a in x):
        y.append(a)
        t[a]=0
        s[a]=0
    t[a]+=1

ans = 0
for i in x:
    ans=max(ans,s[i]-t[i])
for i in y:
    ans=max(ans,s[i]-t[i])

print(ans)
